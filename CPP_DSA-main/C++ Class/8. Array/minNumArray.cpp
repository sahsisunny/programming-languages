#include <iostream>
using namespace std;
void minNumArray()
{
    int n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    int ele[n];

    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " elements: ";
        cin >> ele[i];
    }

    int min = INT_MIN;
    for (i = 0; i <= n; i++)
    {
        if (ele[i] < min)
        {
            min = ele[i];
        }
    }
    cout << "Smallest number is: " << min;
}
int main()
{
    minNumArray();
    return 0;
}