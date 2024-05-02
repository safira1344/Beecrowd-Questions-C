// 1072
 #include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int valores[n], contadorIn = 0, contadorOut = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> valores[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (valores[i] >= 10 && valores[i] <= 20)
        {
            contadorIn++;
        }
        else
        {
            contadorOut++;
        }
    }

    cout << contadorIn << " in" << endl;
    cout << contadorOut << " out" << endl;
    system("pause");
    return 0;
}

