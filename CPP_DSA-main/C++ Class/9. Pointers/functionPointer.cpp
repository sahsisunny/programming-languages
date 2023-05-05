#include <iostream>
using namespace std;
int max(int x, int y)
{
    return x > y ? x : y;
}
int min(int x, int y)
{
    return x < y ? x : y;
}
int main()
{
    int (*fptr)(int, int);
    fptr = max;
    (*fptr)(10, 5);
    fptr = min;
    (*fptr)(10, 5);
    return 0;
}