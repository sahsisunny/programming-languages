#include <iostream>
using namespace std;
float maxNum(float a, float b, float c)
{

    if (a > b && a > b)
    {
        return a;
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int main()
{
    float num1, num2, num3, max;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    max = maxNum(num1, num2, num3);
    cout << "Maximum number is:  " << max;
    return 0;
}