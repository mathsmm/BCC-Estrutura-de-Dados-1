#include "NoArvoreBinaria.hpp"
#include <string>
using namespace std;


class ArvoreBinaria
{
private:
    NoArvoreBinaria* raiz;

    bool pertence(NoArvoreBinaria no, int info);

public:
    ArvoreBinaria();
    
    NoArvoreBinaria* insere(int v, NoArvoreBinaria* esq, NoArvoreBinaria* dir);
    bool vazia();
    bool pertence(int info);
    int pares();
    int folhas();
    string preOrdem();
    string emOrdem();
    string posOrdem();
    int numNos();
    int altura();
    bool igual(ArvoreBinaria a);
};