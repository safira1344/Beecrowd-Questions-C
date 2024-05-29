#include <iostream>

using namespace std;

void apresentacao(string *nome){
    // string outroNome;
    // outroNome = "safi";
    *nome = "safi";
}


int main()
{
    string *nome;
    cin >> *nome;
    apresentacao(nome);
    cout << nome << endl;
    system("pause");

    return 0;
}