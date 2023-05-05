#include <iostream>
using namespace std;
int linearSearch(int ele[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == ele[i])
            return i;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int ele[n];

    // Taking array input
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " elements: ";
        cin >> ele[i];
    }

    int key, res;
    cout << "Enter the key: ";
    cin >> key;

    res = linearSearch(ele, n, key);

    // Printing Result
    if (res >= 0)
        cout << "key is found at " << res << " index.";
    else
        cout << "key is not found!!";
    return 0;
}