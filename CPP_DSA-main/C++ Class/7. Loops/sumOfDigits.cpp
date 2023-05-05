#include <iostream>
using namespace std;
void SumDigits()
{
    unsigned int num, r, sum;
    cout << "Enter the number: ";
    cin >> num;

    while (num != 0)
    {
        r = num % 10;
        num = num / 10;
        sum = sum + r;
    }
    cout << "Sum of Digit is: " << sum;
}
int main()
{
    SumDigits();
    return 0;
}