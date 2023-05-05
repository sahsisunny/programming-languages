#include <iostream>
using namespace std;
void findSize()
{
    int num1;
    float num2;
    char ch;
    cout << "Enter the integer number: ";
    cin >> num1;
    cout << "Enter the float number: ";
    cin >> num2;
    cout << "Enter the character: ";
    cin >> ch;
    cout << "Size of integer is: " << sizeof(num1) << endl;
    cout << "Size of float is: " << sizeof(num2) << endl;
    cout << "Size of character is: " << sizeof(ch) << endl;
}
int main()
{
    findSize();
    return 0;
}