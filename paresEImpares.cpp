// 1259
#include <iostream>

using namespace std;

int organiza(int n[], int testes)
{
    int quantPares = 0, quantImpares = 0;

    for (int i = 0; i < testes; i++)
    {
        if (n[i] % 2 == 0)
            quantPares++;
        if (n[i] % 2 == 1)
            quantImpares++;
    }

    int pares[quantPares];
    int impares[quantImpares];

    int contadorPares = 0, contadorImpares = 0;

    for (int i = 0; i < testes; i++)
    {
        if (n[i] % 2 == 0)
            pares[contadorPares++] = n[i];
    }

    for (int j = 0; j < testes; j++)
    {
        if (n[j] % 2 == 1)
            impares[contadorImpares++] = n[j];
    }

    bool houveAlteracao;
    while (true)
    {
        bool houveAlteracao = false;

        for (int i = 0; i < quantPares; i++)
        {
            if (pares[i] > pares[i + 1])
            {
                int aux = pares[i];
                pares[i] = pares[i + 1];
                pares[i + 1] = aux;
                houveAlteracao = true;
            }
        }

        if (!houveAlteracao)
            break;
    }

    for (int i = 0; i < quantPares; i++)
    {
        cout << pares[i] << endl;
    }

    while (true)
    {
        bool houveAlteracao = false;

        for (int i = 0; i < quantImpares; i++)
        {
            if (impares[i] < impares[i + 1])
            {
                int aux = impares[i];
                impares[i] = impares[i + 1];
                impares[i + 1] = aux;
                houveAlteracao = true;
            }
        }

        if (!houveAlteracao)
            break;
    }

    for (int i = 0; i < quantImpares; i++)
    {
        cout << impares[i] << endl;
    }
}

int main()
{
    int testes;
    cin >> testes;
    int n[testes];

    for (int i = 0; i < testes; i++)
    {
        cin >> n[i];
    }

    organiza(n, testes);
    system("pause");

    return 0;
}