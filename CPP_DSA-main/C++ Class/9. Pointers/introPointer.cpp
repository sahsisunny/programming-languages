#include <iostream>
using namespace std;
void introPointers()
{
    int a = 15;
    int *p = &a;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl; // Print address of a
    cout << "p = " << p << endl;   // Print address of P
    cout << "&p = " << &p << endl; // Print address of P
    cout << "*p = " << *p << endl;
}
int main()
{
    introPointers();
    return 0;
}