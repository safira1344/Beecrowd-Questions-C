#include <iostream>

using namespace std;

int main()
{

    int variavel1, variavel2;
    int temp = 0;
    cin >> variavel1;
    cin >> variavel2;

    if (variavel1 < variavel2)
    {
        temp = variavel1;
        variavel1 = variavel2;
        variavel2 = temp;
    }

    if (variavel1 % variavel2 == 0)
    {
        cout << "Sao Multiplos" << endl;
    }
    else
    {
        cout << "Nao sao Multiplos" << endl;
    }


    system("pause");
    return 0;
}