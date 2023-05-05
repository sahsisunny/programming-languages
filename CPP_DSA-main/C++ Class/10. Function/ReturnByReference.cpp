#include <iostream>
using namespace std;
int &fun(int &x)
{
    cout << "Return by Reference x: " << x << endl;
    return x;
}
int main()
{
    int a = 5;
    fun(a) = 26;
    cout << "Return by Reference a: " << a << endl;
    return 0;
}