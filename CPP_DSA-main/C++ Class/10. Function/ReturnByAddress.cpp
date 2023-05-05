#include <iostream>
using namespace std;
int *fun(int size)
{
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = 5 + i;
    }
    cout << "Address of p: " << p << endl;
    return p;
}
int main()
{
    int a = 5;
    int *q = fun(a);
    cout << "Address of q: " << q << endl;
    return 0;
}