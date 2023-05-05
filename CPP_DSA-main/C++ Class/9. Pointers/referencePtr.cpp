#include <iostream>
using namespace std;
void refPointer()
{
    int x = 10;
    int &y = x;
    cout << "Before increment x = " << x << endl;
    cout << "Before increment y = " << y << endl;
    x++;
    cout << "After increment of x, x = " << x << endl;
    cout << "After increment of x, y = " << y << endl;
    y++;
    cout << "After increment of y, x = " << x << endl;
    cout << "After increment of y, y = " << y << endl;
}
int main()
{
    refPointer();
    return 0;
}