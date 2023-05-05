#include <iostream>
using namespace std;
void PositiveOrNegative()
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

    for (i = 0; i < n; i++)
    {
        if (ele[i] < 0)
        {
            cout << ele[i] << " is Negative." << endl;
        }
        else if (ele[i] > 0)
        {
            cout << ele[i] << " is Positive." << endl;
        }
        else
        {
            cout << ele[i] << " is Zero." << endl;
        }
    }
}
int main()
{
    PositiveOrNegative();
    return 0;
}