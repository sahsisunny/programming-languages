#include <iostream>
using namespace std;
void pointerArithmetic()
{
    int a[5] = {2, 4, 6, 8, 10};
    int *p = a;
    int *q = &a[4];
    int d;

    cout << "int a[5]={2,4,6,8,10}; " << endl;

    // 1. Poiinter move to next location
    cout << "Before p++ : *p = " << *p << endl;
    p++;
    cout << "After p++ : *p = " << *p << endl;

    // 2. Poiinter move to backword location
    cout << "Before p-- : *p = " << *p << endl;
    p--;
    cout << "Before p-- : *p = " << *p << endl;

    // 3. Poiinter move by two element
    cout << "Before p = p + 2 : *p = " << *p << endl;
    p = p + 2;
    cout << "Before p = p + 2 : *p = " << *p << endl;

    // 4. Poiinter backword by two element
    cout << "Before p = p - 2 : *p = " << *p << endl;
    p = p - 2;
    cout << "Before p = p - 2 : *p = " << *p << endl;

    // 5. ((&q - &p)/size of datatype) = result(backword by result elements)
    cout << "Before d = q - p : *p = " << *p << endl;
    d = q - p;
    cout << "Before d = q - p : *p = " << *p << endl;
}
int main()
{
    pointerArithmetic();
    return 0;
}