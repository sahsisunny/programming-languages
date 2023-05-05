#include <iostream>
using namespace std;
void primeNum()
{
    int num, i = 2;
    cout << "Enter the number: ";
    cin >> num;
    while (i < num)
    {
        if (num % i == 0)
        {
            cout << num << " not is Prime";
            break;
        }
        i++;
    }
    if (i == num)
    {
        cout << num << " is Prime";
    }
}
int main()
{
    primeNum();
    return 0;
}