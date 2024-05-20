//1008
#include <iostream>
#include <iomanip>

using namespace std;

void salario(const int horas, double &comissao);

int main()
{

    int numeroFuncionario, horas;
    cin >> numeroFuncionario;
    cin >> horas;

    double comissao;
    cin >> comissao;

    salario(horas, comissao);

    cout << "NUMBER = " << numeroFuncionario << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << comissao << endl;
    system("pause");
    return 0;
}

void salario(const int horas, double &comissao)
{
    comissao = horas * comissao;
}
