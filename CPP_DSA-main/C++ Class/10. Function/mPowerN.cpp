#include <iostream>
using namespace std;
int MpowerN(int m, int n)
{
    int i, res = 1;
    for (i = 1; i <= n; i++)
    {
        res *= m;
    }
    return res;
}
int main()
{
    int base, exponent, res;
    cout << "Enter the Base: ";
    cin >> base;
    cout << "Enter the Exponent: ";
    cin >> exponent;
    res = MpowerN(base, exponent);
    cout << "Result is: " << res;
    return 0;
}