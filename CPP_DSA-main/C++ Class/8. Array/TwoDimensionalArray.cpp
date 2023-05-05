#include <iostream>
using namespace std;
void TwoDimensionalArray()
{
    int n, m, i, j;
    cout << "Enter the number of row: ";
    cin >> n;
    cout << "Enter the number of column: ";
    cin >> m;
    int ele[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "Enter the elements of Row:" << i << " Column: " << j << " element:- ";
            cin >> ele[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "Enter the elements of Row:" << i << " Column: " << j << " element: " << ele[i][j] << endl;
        }
    }
}
int main()
{
    TwoDimensionalArray();
    return 0;
}