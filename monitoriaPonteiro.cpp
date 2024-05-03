/*
#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

void misterio(int *p, int *q);

int main()
{
    setlocale(LC_ALL, " portuguese ");
    int i = 6;
    int j = 10;
    misterio(&i, &j);
    cout << " Após a troca o primeiro valor ser´a " << i;
    cout << " e o segundo valor " << j << endl;
    cout << "Fim do programa .\n";
    getch();
}

void misterio(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
*/

// #include <stdio.h>
// #include <iostream>
// #include <iomanip>

// void func(int *px, int *py);

// int main()
// {
//     int x, y;
//     scanf("%d", &x);
//     scanf("%d", &y);
//     func(&x, &y);
//     printf("x = %d, y = %d\n", x, y);
//     system("pause");

//     return 0;
// }

// void func(int *px, int *py)
// {
//     px = py;
//     *py = (*py) * (*px);
//     *px = *px + 2;
// }

// ou poderia ser dessa forma

// #include <stdio.h>
// #include <iostream>
// #include <iomanip>

// void func(int *px, int *py);

// int main()
// {
//     int x, y;
//     scanf("%d", &x);
//     scanf("%d", &y);
//     func(&x, &y);
//     printf("x = %d, y = %d\n", x, y);
//     system("pause");

// return 0;
// }

// void func(int *px, int *py)
// {
//     *px = *py;
//     *py = (*py) * (*px);
//     *px = *px + 2;
// }

// #include <stdio.h>
// #include <iostream>

// int main()
// {
//     int a, b, *p1, *p2;
//     a = 4;
//     b = 3;
//     p1 = &a;
//     p2 = p1;
//     *p2 = *p1 + 3;
//     b = b * (*p1);
//     (*p2)++;
//     p1 = &b;
//     printf("%d %d\n", *p1, *p2);
//     printf("%d %d\n", a, b);
//     system("pause");
//     return 0;
// }

#include <iostream>

using namespace std;

void MAX(int n, int *A[], int *k, int *linha, int *coluna);

int main()
{

    int n;
    cout << "Digite o tamanho da matriz (n): ";
    cin >> n;

    int A[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Digite o valor para A com linhas e colunas" << endl;
            cin >> A[i][j];
        }
    }

    int k, linha, coluna;
    MAX(n, A, &k, &linha, &coluna);

    cout << "O maior elemento é " << k << ", localizado em A linha: " << linha << " coluna: " << coluna << endl;
    system("pause");

    return 0;
}

void MAX(int n, int *A[], int *k, int *linha, int *coluna)
{
    *k = A[0][0];
    *linha = 0;
    *coluna = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] > *k)
            {
                *k = A[i][j];
                *linha = i;
                *coluna = j;
            }
        }
    }
}