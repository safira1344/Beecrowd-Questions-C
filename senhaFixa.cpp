//1114
#include <iostream>

using namespace std;

int verificaSenha(int senha, const int senhaValida);

int main()
{

    int senha;
    int senhaValida;

    senhaValida = 2002;

    cin >> senha;

    verificaSenha(senha, senhaValida);

    return 0;
}

int verificaSenha(int senha, const int senhaValida)
{

    while (senha != senhaValida)
    {
        cout << "Senha Invalida" << endl;
        cin >> senha;
    }

    if (senha == senhaValida)
    {
        cout << "Acesso Permitido" << endl;
        system("pause");
    }
}