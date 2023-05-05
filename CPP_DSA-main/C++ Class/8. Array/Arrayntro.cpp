#include <iostream>
using namespace std;
void arrayIntro()
{
    int a[] = {
        8,
        9,
        6,
        4,
        6,
    };
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Number: " << i + 1 << " Element is: " << a[i] << endl;
    // }
    for (auto x : a)
        cout << x << endl;
}
int main()
{
    arrayIntro();
    return 0;
}