//2717
// #include <iostream>

// using namespace std;

// int verificacao(int n, int presente1, int presente2)
// {
//     int soma;
//     soma=presente1+presente2;
//     if(soma>n)
//     {
//         cout<<"Deixa para amanha!"<<endl;
//     }else {

//         cout<<"Farei hoje!"<<endl;
//     }

// }

// int main()
// {
//     int n, presente1, presente2;
    
//     cin >> n;
//     cin >> presente1;
//     cin >> presente2;

//     // verificacao(n, presente1, presente2);
//     verificacao(n, presente1, presente2);
//     system("pause");

//     return 0;
// }

//ou pode se fazer dessa forma também fazendo uma função que retorne um bool

#include <iostream>

using namespace std;

bool verificacao(int n, int presente1, int presente2)
{
    int soma;
    soma = presente1 + presente2;
    if (soma > n)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int n, presente1, presente2;

    cin >> n;
    cin >> presente1;
    cin >> presente2;

    bool valido;

    valido = verificacao(n, presente1, presente2);

    if (valido == true)
    {
        cout << "Farei hoje!" << endl;
    }
    else if (valido == false)
    {
        cout << "Deixa para amanha!" << endl;
    }
    system("pause");

    return 0;
}