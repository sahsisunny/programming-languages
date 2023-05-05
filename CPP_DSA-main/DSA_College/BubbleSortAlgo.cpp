#include <iostream>
using namespace std;
int main()
{
    int n = 5, temp;
    bool sort = 0;

    int arr[n] = {1, 2, 4, 7, 8};

    cout << "Original Array = ";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        sort = 1;
        cout << "First Loop" << i << endl;
        for (int j = 0; j < (n - i); j++)
        {
            cout << "Second Loop" << i << endl;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sort = 0;
            }
        }
        if (sort)
        {
            return 0;
        }
    }
    cout << "Sorted Array = ";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}