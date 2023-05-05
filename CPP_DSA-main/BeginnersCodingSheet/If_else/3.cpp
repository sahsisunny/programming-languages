#include <iostream>
using namespace std;
void maxNum()
{
    float num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is Greatest";
    }
    else
    {
        if (num2 > num3)
        {
            cout << num2 << " is Greatest";
        }
        else
        {
            cout << num3 << " is Greatest";
        }
    }
}
int main()
{
    maxNum();
    return 0;
}