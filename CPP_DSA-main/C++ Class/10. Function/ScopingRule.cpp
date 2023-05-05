#include <iostream>
using namespace std;
int x = 10;
int main()
{
    int x = 20;
    {
        int x = 30;
        cout << "For Inner Main Block Variable x = " << x << endl;
    }
    cout << "For Main Block Variable x = " << x << endl;
    cout << "For Global Variable x = " << ::x << endl;

    return 0;
}