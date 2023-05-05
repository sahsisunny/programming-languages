#include <iostream>
using namespace std;
void BinarySearch()
{
    int n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    int ele[n], sortEle[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " elements: ";
        cin >> ele[i];
    }
    int key, l = 0, h = n - 1, mid;
    cout << "Enter the key: ";
    cin >> key;
    mid = (l + h) / 2;
    if (key == ele[mid])
    {
        cout << "key is found at " << mid << " index.";
        exit(0);
    }
    else if (key < ele[mid])
        h = mid - 1;
    else
        l = mid + 1;
    cout << "key is not found!!";
}
int main()
{
    BinarySearch();
    return 0;
}