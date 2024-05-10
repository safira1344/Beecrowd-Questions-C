#include <iostream>

using namespace std;


int main()
{

    int aux, num=479001599, div=0;

    for(aux=1 ; aux<=num ; aux++)
        if(num%aux==0)
            div++;

    if(div==2)
        cout<<"É primo"<<endl;
    else
        cout<<"Não é primo"<<endl;

    return 0;
}
