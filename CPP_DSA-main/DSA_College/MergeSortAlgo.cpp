#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy value in first array
    int mainIndexArray = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndexArray++];
    }

    // Copy value in second array
    mainIndexArray = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndexArray++];
    }

    // Sorting 2 arrays
    int index1 = 0;
    int index2 = 0;
    mainIndexArray = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
            arr[mainIndexArray++] = first[index1++];
        else
            arr[mainIndexArray++] = second[index2++];
    }

    while (index1 < len1)
        arr[mainIndexArray++] = first[index1++];
    while (index2 < len2)
        arr[mainIndexArray++] = second[index2++];

    delete[] first;
    delete[] second;
}
void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    // Sorting left part
    mergeSort(arr, s, mid);

    // Sorting right part
    mergeSort(arr, mid + 1, e);

    // merge arrays
    merge(arr, s, e);
}
int main()
{
    int n = 7;
    int arr[n] = {5, 6, 1, 4, 8, 9, 4};

    // Original Array
    cout << "Before Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    // Sorted Array
    cout << "After Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}