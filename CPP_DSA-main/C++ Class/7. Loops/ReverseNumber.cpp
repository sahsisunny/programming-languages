#include <iostream>
using namespace std;
void revNum()
{
    int num, r, rev;
    cout << "Enter the number: ";
    cin >> num;

    while (num > 0)
    {
        r = num % 10;
        num = num / 10;
        rev = rev * 10 + r;
    }
    cout << "Reverse number is: " << rev;
}
int main()
{
    revNum();
    return 0;
}