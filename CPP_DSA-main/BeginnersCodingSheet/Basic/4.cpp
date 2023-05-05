#include <iostream>
using namespace std;
void findQuotient()
{
    int divisor, dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Quotient is: " << divisor / dividend;
}
int main()
{
    findQuotient();
    return 0;
}