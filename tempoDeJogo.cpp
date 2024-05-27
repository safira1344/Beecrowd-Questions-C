#include <iostream>

using namespace std;

int main()
{

    int horaInicial, horaFinal;

    cin >> horaInicial;
    cin >> horaFinal;

    if (horaInicial > horaFinal)
    {
        cout << "O JOGO DUROU " << 24 - (horaInicial - horaFinal) << " HORAS(S)" << endl;
    }
    else if (horaFinal > horaInicial)
    {
        cout << "O JOGO DUROU " << (horaFinal - horaInicial) << " HORAS(S)" << endl;
    }
    else
    {
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }

    system("pause");
    
    return 0;
}