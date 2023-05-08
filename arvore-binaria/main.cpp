#include "ArvoreBinaria.hpp"
#include <iostream>
using namespace std;


int main()
{
    /* Árvore construída:
     *        9
     *      /   \
     *     /     \
     *    5       8
     *          /   \
     *         /     \
     *        6       7
     *       / \     / \
     *      1   2   3   4
     */

    NoArvoreBinaria* f1 = new NoArvoreBinaria(1);
    NoArvoreBinaria* f2 = new NoArvoreBinaria(2);
    NoArvoreBinaria* f3 = new NoArvoreBinaria(3);
    NoArvoreBinaria* f4 = new NoArvoreBinaria(4);
    NoArvoreBinaria* f5 = new NoArvoreBinaria(5);
    NoArvoreBinaria* n1 = new NoArvoreBinaria(6, f1, f2);
    NoArvoreBinaria* n2 = new NoArvoreBinaria(7, f3, f4);
    NoArvoreBinaria* n3 = new NoArvoreBinaria(8, n1, n2);
    ArvoreBinaria* arvore = new ArvoreBinaria();
    arvore->insere(9, f5, n3);

    cout << "Pre-ordem: " << arvore->preOrdem() << endl;
    cout << "Em-ordem:  " << arvore->emOrdem()  << endl;
    cout << "Pos-ordem: " << arvore->posOrdem() << endl;
    cout << "\n";

    cout << "Numero 9 pertence a arvore? "  << arvore->pertence(9)  << endl;
    cout << "Numero 2 pertence a arvore? "  << arvore->pertence(2)  << endl;
    cout << "Numero 11 pertence a arvore? " << arvore->pertence(11) << endl;
    cout << "\n";

    cout << "Quantidade de pares: " << arvore->pares() << endl;
    cout << "Numero de folhas: " << arvore->folhas() << endl;
    cout << "Numero de nos: " << arvore->numNos() << endl;
    cout << "Altura da arvore: " << arvore->altura() << endl;

    return 0;
}