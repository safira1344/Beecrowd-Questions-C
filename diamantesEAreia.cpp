//questão 1069
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string limpaAreia(string mina)
{
    string minalimpa;
    for (int i = 0; i < mina.length(); i++)
        if (mina[i] != '.')
            minalimpa += mina[i];
    return minalimpa;
}
int main()
{
    int teste, contador = 0, quantMina = 0;
    string mina, diamantes;
    cin >> teste;
    for (int i = 0; i < teste; i++)
    {
        cin >> mina;
        mina = limpaAreia(mina);
        quantMina = mina.length();
        for (int j = 0; j < quantMina - 1; j++)
        {
            if (mina[j] == '<')
            {
                for (int k = j + 1; k < quantMina; k++)
                {
                    if (mina[k] == '>')
                    {
                        contador++;
                        mina.erase(k, 1);
                        mina.erase(j, 1);
                        quantMina -= 2;
                        j = -1;
                        break;
                    }
                }
            }
        }
        cout << contador << endl;
        contador = 0;
    }
    return 0;
}