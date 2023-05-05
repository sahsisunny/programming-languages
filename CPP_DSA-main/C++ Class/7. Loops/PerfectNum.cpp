#include <iostream>
using namespace std;
void perfectNumber()
{
    int num, i = 1, sum = 0;
    cout << "Enter the number: ";
    cin >> num;
    while (i <= num)
    {
        if (num % i == 0 && i!=num)
        {
            sum = sum + i;
        }
        i++;
    }
    if (sum == num)
    {
        cout << num << " is Perfect number.";
    }
    else
    {
        cout << num << " is not Perfect number.";
    }
}
int main()
{
    perfectNumber();
    return 0;
}