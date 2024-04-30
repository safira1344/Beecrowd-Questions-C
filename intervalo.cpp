//questao 1037

#include <iostream>
 
using namespace std;

void intervaloNumero(double intervalo){
    if(intervalo<=25 && intervalo>=0)
        cout<<"Intervalo [0,25]"<<endl;
    else if(intervalo>25 && intervalo<=50)
        cout<<"Intervalo (25,50]"<<endl;
    else if(intervalo>50 && intervalo <=75)
        cout<<"Intervalo (50,75]"<<endl;
    else if(intervalo>75 && intervalo <=100)
        cout<<"Intervalo (75,100]"<<endl;
    else 
        cout<<"Fora de intervalo"<<endl;
}

int main() {
    double intervalo;
    cin>>intervalo;
    intervaloNumero(intervalo);
    system("pause");
 
    return 0;
}