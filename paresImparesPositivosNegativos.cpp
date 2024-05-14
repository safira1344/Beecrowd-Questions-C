#include <iostream>

using namespace std;

int main()
{

    int n[5], par = 0, impar = 0, positivo = 0, negativo = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    for (int j = 0; j < 5; j++)
    {
        if (n[j] % 2 == 0)
            par++;
        if (n[j] % 2 == 1)
            impar++;
        if (n[j] > 0)
            positivo++;
        if (n[j] < 0)
            negativo++;
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;

    return 0;
}