#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {5, 6, 1, 4, 8, 9, 4};
    int max = arr[0];

    // Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    // Displaying Sorted Array
    cout << "Sorted List: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Displaying Second Greatest number
    cout << "Second Greatest number is: "<<arr[n-2];
}