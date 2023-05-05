#include <iostream>
using namespace std;
void linearSearch()
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

    int key;
    cout << "Enter the key: ";
    cin >> key;

    for (i = 0; i < n; i++)
    {
        if (key == ele[i])
        {
            cout << "key is found at " << i << " index.";
            exit(0);
        }
    }
    cout << "key is not found!!";
}

int main()
{
    linearSearch();
    return 0;
}