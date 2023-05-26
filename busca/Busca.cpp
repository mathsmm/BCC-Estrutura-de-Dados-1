#include <vector>
#include <iostream>
using namespace std;

class Busca
{
public:
    static int busca_linear(vector<int> vet, int val)
    {
        int tam = vet.size();
        int i = 0;
        while (i < tam)
        {
            if (vet[i] == val)
                return i;
            i++;
        }
        return -1;
    }

    // static int busca_binaria(vector<int> vet, int val)
};