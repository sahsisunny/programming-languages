#include <iostream>
using namespace std;
void nestedLoop()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << "i = " << i << " j = " << j << endl;
        }
    }
}
int main()
{
    nestedLoop();
    return 0;
}