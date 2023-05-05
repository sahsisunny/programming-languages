#include <iostream>
using namespace std;
void EvenOdd()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " is Even";
    }
    else
    {
        cout << num << " is Odd";
    }
}
int main()
{
    EvenOdd();
    return 0;
}