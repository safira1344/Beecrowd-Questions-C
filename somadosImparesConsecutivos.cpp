#include <iostream>

using namespace std;

int main()
{

    int n, num1, num2, temp, somaImpar = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // lendo os números do intervalo
        cin >> num1;
        cin >> num2;

        // verifica se numero 1 é maior que o numero 2 e faz a troca
        if (num1 > num2)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

        // percorrendo os números dentro do intervalo digitado pelo usuario
        for (int j = num1+1; j < num2; j++)
        {
            // verifica se o número referente ao indice j é impar
            if (!(j % 2 == 0))
            {
                // se for impar incrementa totalImpar
                somaImpar += j;
            }
        }
        // printa o total de impares dentro do intervalo referente ao numero do teste
        cout << somaImpar << endl;
        somaImpar = 0;
    }

    system("pause");

    return 0;
}