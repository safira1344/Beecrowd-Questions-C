#include <iostream>
#include <stdio.h>
#include <iomanip> //biblioteca para usar fixed e setprecision para as casas decimais

using namespace std;

int main()
{
    int graus;
    while (scanf("%d", &graus) != EOF)
    {
        if (graus < 90)
        {
            cout << "Bom Dia!!" << endl;
        }
        else if (graus < 180)
        {
            cout << "Boa Tarde!!" << endl;
        }
        else if (graus < 270)
        {
            cout << "Boa Noite!!" << endl;
        }
        else if (graus < 360)
        {
            cout << "De Madrugada!!" << endl;
        }
        else
        {
            cout << "Bom Dia!!" << endl;
        }
    }

    system("pause");

    return 0;
}