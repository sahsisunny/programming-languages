#include <iostream>
using namespace std;
void sumInteger()
{
    int num1, num2;
    cout << "Enter the 1st Number: ";
    cin >> num1;
    cout << "Enter the 2nd Number: ";
    cin >> num2;
    cout << "Sum is: " << num1 + num2;
}
int main()
{
    sumInteger();
    return 0;
}