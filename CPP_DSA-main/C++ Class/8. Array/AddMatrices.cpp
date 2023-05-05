#include <iostream>
using namespace std;
void addMatrices()
{
    int i, j;
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int c[2][3];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter the elements of Row:" << i << " Column: " << j << " element: " << c[i][j] << endl;
        }
    }
}
int main()
{
    addMatrices();
    return 0;
}