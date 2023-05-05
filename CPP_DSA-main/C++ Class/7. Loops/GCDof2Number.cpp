#include <iostream>
using namespace std;
void GCDof2Num()
{
    int num1, num2, number1, number2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    number1 = num1;
    number2 = num2;
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
        else if (num2 > num1)
        {
            num2 = num2 - num1;
        }
    }

    cout << "Gcd of " << number1 << " and " << number2 << " is: " << num1;
}
int main()
{
    GCDof2Num();
    return 0;
}