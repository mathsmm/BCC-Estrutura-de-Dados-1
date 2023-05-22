#include "Arvore.hpp"

Arvore::Arvore():
    raiz{nullptr}
{}

NoArvore* Arvore::criaNo(int info)
{
    NoArvore* novo_no = new NoArvore(info);
    NoArvore* atual = raiz->getPrim();

    if (atual == nullptr)
    {
        raiz->setPrim(novo_no);
        return novo_no;
    }

    while (atual->getProx() != nullptr)
    {
        atual = atual->getProx();
    }

    atual->setProx(novo_no);
    return novo_no;
}

void Arvore::insereFilho(NoArvore* no, NoArvore* sa)
{
    sa->setProx(no->getPrim());
    no->setPrim(sa);
    raiz = no;
}

std::string Arvore::toString()
{
    return imprime(raiz);
}

std::string imprime(NoArvore* no)
{
    std::string s = "";
    s += "<" + std::to_string(no->getInfo());

    NoArvore* p = no->getPrim();
    while (p != nullptr)
    {
        s += imprime(p);
        p = p->getProx();
    }
    s += ">";
    return s;
}