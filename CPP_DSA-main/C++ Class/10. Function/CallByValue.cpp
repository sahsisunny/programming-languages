#include <iostream>
using namespace std;
void swap(int a, int b)
{
    cout << "----------Before Swapping----------" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "----------After Swapping----------" << endl;
    cout << "a = " << a << ", b = " << b << endl;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y); // Call/Pass by value function
    cout << "----------Actual Result----------" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}