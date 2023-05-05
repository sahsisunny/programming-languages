#include <iostream>
using namespace std;
void arrayIntro()
{
    int a[] = {};
    int num;

    cout << "Enter the Number of element: ";
    cin >> num;

    for (int j = 0; j <= num; j++)
    {
        cout << "Element " << j + 1 << ": ";
        cin >> a[j];
    }

    for (int i = 0; i <= num; i++)
    {
        cout << "Number: " << i + 1 << " Element is: " << a[i] << endl;
    }
}
int main()
{
    arrayIntro();
    return 0;
}