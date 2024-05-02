#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // criacao de variaveis
    double nota1, nota2, peso1, peso2, media, notaFinal1, notaFinal2;
    // definição dos pesos
    peso1 = 3.5;
    peso2 = 7.5;

    // pedindo as duas notas
    cin >> nota1;
    cin >> nota2;

    // media ponderada das notas
    notaFinal1 = nota1 * peso1;
    notaFinal2 = nota2 * peso2;

    // calculo da media sendo dividido pelo total dos pesos
    media = (notaFinal1 + notaFinal2) / 11;

    // printa media
    cout << fixed << setprecision(5) << "MEDIA = " << media << endl;

    system("pause");

    return 0;
}