#include <iostream>
using namespace std;
int g = 5; // Global Variable
void sum()
{
    int a = 5; // Local Variable
    g = g + a;
    cout << "a = " << a << endl;
}
int main()
{
    int x = 10; // Local Variable
    g = 15;
    sum();
    g++;
    cout << "g = " << g << endl;
    return 0;
}