#include <iostream>
using namespace std;
void sumOfN()
{
    int num, sum;
    cout << "Enter the number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of "<<num<<" Natural number is: " << sum;
}
int main()
{
    sumOfN();
    return 0;
}