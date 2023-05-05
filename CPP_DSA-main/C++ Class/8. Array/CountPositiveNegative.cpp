#include <iostream>
using namespace std;
void countPositiveOrNegative()
{
    int n, i, positive = 0, negative = 0, zero = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int ele[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " elements: ";
        cin >> ele[i];
    }
    for (i = 0; i < n; i++)
    {
        if (ele[i] < 0)
        {
            negative = negative + 1;
        }
        else if (ele[i] > 0)
        {
            positive = positive + 1;
        }
        else
        {
            zero = zero + 1;
        }
    }
    cout << "Total Positive element is: " << positive << endl;
    cout << "Total Negative element is: " << negative << endl;
    cout << "Total Zero element is: " << zero << endl;
}
int main()
{
    countPositiveOrNegative();
    return 0;
}