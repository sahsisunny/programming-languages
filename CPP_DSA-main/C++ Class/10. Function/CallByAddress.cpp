#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;
    cout << "----------Before Swapping----------" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swap(&x, &y);    // Call/Pass by Address function
    cout << "----------After Swapping----------" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}