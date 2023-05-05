#include <iostream>
using namespace std;
void sumArrayElement()
{
    int sum = 0;
    int ele[] = {65, 9, 6, 3, 4};
    for (int i = 0; i <= 5; i++)
    {
        sum = sum + ele[i];
    }
    cout << "Sum of elements is: " << sum;
}
int main()
{
    sumArrayElement();
    return 0;
}