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