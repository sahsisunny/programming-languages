#include <iostream>
using namespace std;
int addFun(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
int main()
{
    int a = 5, b = 26, c;
    c = addFun(a, b);
    cout << "Sum is: " << c;
    return 0;
}