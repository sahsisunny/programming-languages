#include <iostream>
using namespace std;

int main()
{
    int num = 5, temp;
    int orgArray[num] = {1, 2, 3, 4, 5};
    int swapArray[num];
    for (int i = 5; i <= num; i--)
    {
        cout<<i;
        temp = orgArray[i];
        swapArray[i] = temp;
    }
    // for (int i = 0; i < num; i++)
    // {
    //     cout << swapArray[i] << endl;
    // }

    return 0;
}