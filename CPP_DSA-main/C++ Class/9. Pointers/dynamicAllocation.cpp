#include <iostream>
using namespace std;
void dynamicAllocation()
{
    int *p = new int[5];
    p[0] = 5;
    p[1] = 9;
    cout << "p[0] = " << p[0] << endl;
    cout << "p[1] = " << p[1] << endl;
    delete[] p;
    p = nullptr;
}
int main()
{
    dynamicAllocation();
    return 0; 
}   