#include <iostream>
#include <iomanip>

#define consumo 12

using namespace std;

void analiseGasto(int tempoGasto, int velocidadeMedia, double &distanciaPercorrida);
double analiseGasto(int tempoGasto, int velocidadeMedia);

int main()
{

    int tempoGasto, velocidadeMedia;
    cin >> tempoGasto;
    cin >> velocidadeMedia;
    double distanciaPercorrida;
    // analiseGasto(tempoGasto, velocidadeMedia, distanciaPercorrida);
    distanciaPercorrida=analiseGasto(tempoGasto, velocidadeMedia);
    cout << fixed << setprecision(3) << distanciaPercorrida << endl;
    system("pause");

    return 0;
}

void analiseGasto(int tempoGasto, int velocidadeMedia, double &distanciaPercorrida)
{
    distanciaPercorrida = tempoGasto * velocidadeMedia;
    distanciaPercorrida = distanciaPercorrida / consumo;
}

double analiseGasto(int tempoGasto, int velocidadeMedia)
{
    return (double(tempoGasto * velocidadeMedia)) / consumo;
}