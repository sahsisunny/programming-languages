#include <iostream>
using namespace std;
void DispDigits()
{
    int num, r;
    cout << "Enter the number: ";
    cin >> num;

    while (num != 0)
    {
        r = num % 10;
        num = num / 10;
        cout << r << endl;
    }
}
int main()
{
    DispDigits();
    return 0;
}