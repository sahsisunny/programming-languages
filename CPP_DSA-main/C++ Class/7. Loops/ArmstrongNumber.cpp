#include <iostream>
using namespace std;
void armStrong()
{
    int num = 153, m, r, sum = 0;
    m = num;
    cout << "Enter the number: ";
    cin >> num;

    while (num > 0)
    {
        r = num % 10;
        num = num / 10;
        sum = sum + (r * r * r);
    }
    if (m == sum)
    {
        cout << m << " is Armstrong number.";
    }
    else
    {
        cout << m << " is not Armstrong number.";
    }
}
int main()
{
    armStrong();
    return 0;
}