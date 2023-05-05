#include <iostream>
using namespace std;
void Calc()
{
    int num1, num2, options;
    cout << "Enter the 1st number: ";
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;

    cout << "Enter the options(1-5): ";
    cin >> options;
    switch (options)
    {
    case 1:
        cout << "\nSum is : " << num1 + num2;
        break;
    case 2:
        cout << "\nSubtraction is : " << num1 - num2;
        break;
    case 3:
        cout << "\nMultiplication is : " << num1 * num2;
        break;
    case 4:
        cout << "\nDivision is : " << num1 / num2;
        break;
    case 5:
        cout << "\nModulus is : " << num1 % num2;
        break;
    default:
        cout << "Enter the valid options" << endl;
        break;
    }
}
int main()
{
    Calc();
    return 0;
}