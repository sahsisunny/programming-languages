#include <iostream>
using namespace std;
void DynamicDesc()
{
    int a = 5, b = 23;
    if (true)
    {
        int c = a + b; // c is a Dynamically Declare. it means the if block is finish then c variable is removed/deleted from stack area from memory.
        cout << c << endl;
    }
     if (int c = a * b)  // c is a Dynamically Declare. it means the if block is finish then c variable is removed/deleted from stack area from memory.
    {
        
        cout << c << endl;
    }
}
int main()
{
    DynamicDesc();
    return 0;
}