#include <iostream>
using namespace std;
void reversePalin()
{
    int num, m, n,rev = 0;
    m = num;
    cout << "Enter the number: ";
    cin >> num;
    m = num;
    while (num != 0)
    {
        n = num % 10;
        rev = rev * 10 + n;
        num = num / 10;
        
    }
    cout << "The reverse of the number is: " << rev << endl;
    if (m == rev)
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
    reversePalin();
    return 0;
}