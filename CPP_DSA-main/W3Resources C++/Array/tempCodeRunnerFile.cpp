#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the elements number: ";
    cin >> num;
    int intArr[num];

    // take elements input
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the elements " << i + 1 << " : ";
        cin >> intArr[i];
    }
    // Main Code
    int greatest = intArr[0];
    for (int i = 0; i < num; i++)
    {
        if (intArr[i] > greatest)
        {
            greatest = intArr[i];
        }
    }
    cout << "Largets number is: " << greatest;
    return 0;
}
/*
------- Algorithms------
1. Take number of elements
2. Take elements
3. temp <-- INT_MAX
4. Compare all elements to temp variable (temp>intArr[i])
5. print greatest
*/