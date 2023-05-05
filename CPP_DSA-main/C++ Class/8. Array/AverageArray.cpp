#include <iostream>
using namespace std;
void averageArray()
{
    int sum = 0,average=0;
    int ele[] = {65, 9, 6, 3, 4};
    for (int i = 0; i <= 5; i++)
    {
        sum = sum + ele[i];
    }
    average=sum/5;
    cout << "Average is: " << average;
}
int main()
{
    averageArray();
    return 0;
}