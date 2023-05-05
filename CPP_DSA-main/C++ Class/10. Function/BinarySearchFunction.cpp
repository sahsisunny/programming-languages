#include <iostream>
using namespace std;
int BinarySearch(int ele[], int n, int key, int l, int h, int mid)
{
    h = n - 1;
    mid = (l + h) / 2;
    if (key == ele[mid])
    {
        return mid;
    }
    else if (key < ele[mid])
        h = mid - 1;
    else
        l = mid + 1;
    return -1;
}
int main()
{
    int n, i, res;
    cout << "Enter the number of elements: ";
    cin >> n;
    int ele[n], sortEle[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " elements: ";
        cin >> ele[i];
    }
    int key, l = 0, h, mid;
    cout << "Enter the key: ";
    cin >> key;
    res = BinarySearch(ele, n, key, l, h, mid);

    // Printing Result
    if (res >= 0)
        cout << "key is found at " << res << " index.";
    else
        cout << "key is not found!!";
    return 0;
}