#include <iostream>
using namespace std;
void multiplyDecimalNum()
{
    float num1, num2;
    cout << "Enter the 1st Number: ";
    cin >> num1;
    cout << "Enter the 2nd Number: ";
    cin >> num2;
    cout << "Multiplication is: " << num1 * num2;
}
int main()
{
    multiplyDecimalNum();
    return 0;
}