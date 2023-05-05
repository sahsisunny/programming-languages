/* ------- Algorithms------
1. Take number of elements
2. Take elements
3. Sort all the elements in ascending order.
3. var greatest <-- [initial elements of an array]
4. Compare all elements to greatest variable (intArr[i] > greatest)
5. if intArr[i] > greatest then greatest<-- intArr[i]
6. print greatest
*/

#include <iostream>
using namespace std;
int greatestNum(int intArr[], int num)
{
    int greatest = intArr[0];
    for (int i = 0; i < num; i++)
    {
        if (intArr[i] > greatest)
        {
            greatest = intArr[i];
        }
    }
    return greatest;
}

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

    cout << "Largest number is: " << greatestNum(intArr, num);
    return 0;
}
