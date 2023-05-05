#include <iostream>
using namespace std;
void subtractMatrices()
{
    int i, j;
    int a[2][3] = {{9, 8, 6}, {8, 6, 9}};
    int b[2][3] = {{4, 5, 6}, {4, 5, 6}};
    int c[2][3];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    for (i = 0; i < 2; i++)
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
    subtractMatrices();
    return 0;
}