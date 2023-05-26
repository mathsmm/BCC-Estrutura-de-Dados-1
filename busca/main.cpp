#include <iostream>
#include <vector>
#include <cmath>
#include "Vetor.cpp"
#include "Busca.cpp"
using namespace std;

int main()
{
    // vector<vector<int>> vv;
    // int i = 0;
    // while (i < 2)
    // {
    //     int j = 1;
    //     while (j <= 2)
    //     {
    //         vector<int> v = Vetor::cria_embaralhado((int)round(pow(10, j)));
    //         vv.push_back(v);
    //         j++;
    //     }
    //     i++;
    // }

    // int tam = vv.size();
    // i = 0;
    // while (i < tam)
    // {
    //     cout << Vetor::to_str(vv[i]) << endl;
    //     i++;
    // }

    vector<int> v0 = Vetor::cria_embaralhado((int)round(pow(10, 1)));
    vector<int> v1 = Vetor::cria_embaralhado((int)round(pow(10, 2)));
    vector<int> v2 = Vetor::cria_embaralhado((int)round(pow(10, 3)));
    vector<int> v3 = Vetor::cria_embaralhado((int)round(pow(10, 4)));
    vector<int> v4 = Vetor::cria_embaralhado((int)round(pow(10, 5)));

    vector<int> v5 = Vetor::cria_ordenado((int)round(pow(10, 1)));
    vector<int> v6 = Vetor::cria_ordenado((int)round(pow(10, 2)));
    vector<int> v7 = Vetor::cria_ordenado((int)round(pow(10, 3)));
    vector<int> v8 = Vetor::cria_ordenado((int)round(pow(10, 4)));
    vector<int> v9 = Vetor::cria_ordenado((int)round(pow(10, 5)));

    cout << "Busca linear dos numeros 3, 30, 300, 3000 e 30000" << endl;

    cout << to_string(Busca::busca_linear(&v0, 3)) << endl;
    cout << to_string(Busca::busca_linear(&v1, 30)) << endl;
    cout << to_string(Busca::busca_linear(&v2, 300)) << endl;
    cout << to_string(Busca::busca_linear(&v3, 3000)) << endl;
    cout << to_string(Busca::busca_linear(&v4, 30000)) << endl;

    cout << "\nBusca binaria dos numeros 3, 30, 300, 3000 e 30000" << endl;

    cout << to_string(Busca::busca_binaria(&v5, 3)) << endl;
    cout << to_string(Busca::busca_binaria(&v6, 30)) << endl;
    cout << to_string(Busca::busca_binaria(&v7, 300)) << endl;
    cout << to_string(Busca::busca_binaria(&v8, 3000)) << endl;
    cout << to_string(Busca::busca_binaria(&v9, 30000)) << endl;

    // i = 1;
    // while (i <= 5)
    //     cout << to_string(Busca::busca_linear(&(vv[i]), 3 * (int)round(pow(10, i++ - 1)))) << endl;

    // i = 6;
    // while (i <= 10)
    //     cout << to_string(Busca::busca_binaria(&(vv[i]), 3 * (int)round(pow(10, i++ - 6)))) << endl;

    cout << "Fim" << endl;

    return 0;
}