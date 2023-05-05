#include <iostream>
using namespace std;
void multiplyMatrices()
{
    int i, j, k;
    int a[3][3] = {{2, 3, 2},
                   {2, 3, 2},
                   {2, 3, 2}};
    int b[3][3] = {{2, 3, 2},
                   {2, 3, 2},
                   {2, 3, 2}};
    int c[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    multiplyMatrices();
    return 0;
}