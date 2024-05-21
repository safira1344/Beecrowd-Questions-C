#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    string nome;
    double salarioFixo;
    double vendas;

    getline(cin, nome);
    cin >> salarioFixo;
    cin >> vendas;
    cin.ignore();

    cout << fixed << setprecision(2) << "TOTAL = R$ " << (vendas * 0.15) + salarioFixo << endl;

    system("pause");

    return 0;
}