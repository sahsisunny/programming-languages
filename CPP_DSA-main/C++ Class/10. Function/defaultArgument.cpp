#include <iostream>
using namespace std;
int add(int x, int y, int z = 0)
{
    return x + y + z;
}
int main()
{
    cout << "Integer Sum is three argument: " << add(5, 9, 3) << endl;
    cout << "Integer Sum is two argument: " << add(5, 9) << endl;
    return 0;
}