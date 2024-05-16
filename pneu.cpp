#include <iostream>
 
using namespace std;

int diferenca(int &pressaoDesejada, int &pressaoLida){
    int subtracao = pressaoDesejada - pressaoLida;
    cout<<subtracao<< endl;

}


int main() {
    int pressaoDesejada, pressaoLida;
    cin>>pressaoDesejada;
    cin>>pressaoLida;
    diferenca(pressaoDesejada, pressaoLida);
    system("pause");
 
 
    return 0;
}