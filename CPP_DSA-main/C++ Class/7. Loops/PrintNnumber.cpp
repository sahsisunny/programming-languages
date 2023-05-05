#include <iostream>
using namespace std;
void printN()
{
    int n, i = 1;
    cout << "Enter the Number: ";
    cin >> n;
// while loop
    // while (i <= n)
    // {
    //     cout << i << endl;
    //     i++;
    // }
// do-while loop
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= n);
// for loop
    for (int j = 1; j <= n; j++)
    {
        cout << j << endl;
    }
}
int main()
{
    printN();
    return 0;
}