#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {5, 6, 1, 4, 8, 9, 4};

    // Print UnSorted Array
    cout << "Unsorted List: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // Print Sorted Array
    cout << "Sorted List: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}