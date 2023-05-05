#include <iostream>
using namespace std;
template <class T>
T maxNum(T x, T y)
{
    return x > y ? x : y;
}
int main()
{
    int res1 = maxNum(9, 12);
    cout << "Integer Maximum number is: " << res1 << endl;
    cout << "Float Maximum number is: " << maxNum(19.26f, 12.54f) << endl;
    return 0;
}