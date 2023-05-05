#include <iostream>
using namespace std;
void factors()
{
    int num, i = 1;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Factors is: ";
    while (i <= num)
    {
        if (num % i == 0)
        {
            cout << i << " ,";
        }
        i++;
    }
}
int main()
{
    factors();
    return 0;
}