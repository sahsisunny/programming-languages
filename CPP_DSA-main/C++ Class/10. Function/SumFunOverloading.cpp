// Function Overloading
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int res;
    res = a + b;
    return res;
}
int sum(int a, int b, int c)
{
    int res;
    res = a + b + c;
    return res;
}
int main()
{
    int a = 5, b = 3, c = 9, res1, res2;
    res1 = sum(a, b);
    res2 = sum(a, b, c);
    cout << "Sum of a and b is: " << res1 << endl;
    cout << "Sum of a, b, and c is: " << res2 << endl;
    return 0;
}