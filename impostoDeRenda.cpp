#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float salario;
    cin >> salario;

    if (salario <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    else if (salario <= 3000.00)
    {
        cout << fixed << setprecision(2) << "R$ " << (salario - 2000.00) * 0.08 << endl;
    }
    else if (salario <= 4500.00)
    {
        cout << fixed << setprecision(2) << "R$ " << 1000.00 * 0.08 + (salario - 3000.00) * 0.18 << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << "R$ " << 1000.00 * 0.08 + 1500.00 * 0.18 + (salario - 4500.00) * 0.28 << endl;
    }

    return 0;
}