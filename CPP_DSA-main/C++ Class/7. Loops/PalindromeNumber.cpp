#include <iostream>
using namespace std;
void Palinmdrome()
{
    int num, m, r, sum = 0;
    
    cout << "Enter the number: ";
    cin >> num;
    m = num;

    while (num != 0)
    {
        r = num % 10;
        sum = sum * 10 + r;
        num = num / 10;
    }
    if (m == sum)
    {
        cout << m << " is Palinmdrome number.";
    }
    else
    {
        cout << m << " is not Palinmdrome number.";
    }
}
int main()
{
    Palinmdrome();
    return 0;
}