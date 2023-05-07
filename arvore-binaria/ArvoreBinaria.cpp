#include "ArvoreBinaria.hpp"


ArvoreBinaria::ArvoreBinaria():
    raiz{nullptr}
{}

NoArvoreBinaria* ArvoreBinaria::insere(int v, NoArvoreBinaria* esq, NoArvoreBinaria* dir)
{
    NoArvoreBinaria* novoNo = new NoArvoreBinaria(v, esq, dir);
    raiz = novoNo;
    return novoNo;
}

bool ArvoreBinaria::vazia()
{
    return raiz == nullptr;
}

bool ArvoreBinaria::pertence(int info)
{
    return pertence(this->raiz, info);
}

bool ArvoreBinaria::pertence(NoArvoreBinaria* no, int info)
{
    if (no == nullptr)
    {
        return false;
    }
    else
    {
        return (
            (no->getInfo()      == info) || 
            pertence(no->getSae(), info) || 
            pertence(no->getSad(), info)
        );
    }
}

int ArvoreBinaria::pares()
{
    return pares(this->raiz);
}

int ArvoreBinaria::pares(NoArvoreBinaria* no)
{
    if (no == nullptr)
    {
        return 0;
    }
    else
    {
        return 
            ((no->getInfo() % 2) == 0)
            ? 1 + pares(no->getSae()) + pares(no->getSad())
            : 0 + pares(no->getSae()) + pares(no->getSad());
    }
}