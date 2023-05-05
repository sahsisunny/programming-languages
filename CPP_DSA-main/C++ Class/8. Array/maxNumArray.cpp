#include <iostream>
using namespace std;
void maxNumArray()
{
    int ele[] = {65, 9, 6, 364, 4};
    int max = INT_MAX;
    for (int i = 0; i <= 5; i++)
    {
        if (ele[i] > max)
        {
            max = ele[i];
        }
    }
    cout << "Greatest number is: " << max;
}
int main()
{
    maxNumArray();
    return 0;
}