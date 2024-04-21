#include <iostream>
#include <math.h>
#include <iomanip> //biblioteca para usar fixed e setprecision para as casas decimais

#define n 3.14159

using namespace std;

void area(double &raio){
    raio = (raio*raio) * n;

}
int main() {
 
    double raio;
    cin>>raio;
    area(raio);
    cout<<fixed<<setprecision(4)<<"A="<<raio<<endl;
    system("pause");

    return 0;
}