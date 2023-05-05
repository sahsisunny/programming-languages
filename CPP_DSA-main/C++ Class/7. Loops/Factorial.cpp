#include <iostream>
using namespace std;
void fact()
{
    long int num, fact = 1, i = 1;
    cout << "Enter the number: ";
    cin >> num;
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    cout << "Factorial of " << num << " is : " << fact;
}
int main()
{
    fact();
    return 0;
}