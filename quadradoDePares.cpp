// 1073
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i += 2)
    {
        cout << i << "^2 = " << i * i << "\n";
    }
    system("pause");

    return 0;
}
