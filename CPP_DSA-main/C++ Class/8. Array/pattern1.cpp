#include <iostream>
using namespace std;
void pattern1()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i+j>3)
            {
                cout << "* ";
            }else{
                cout<<"  ";
            }           
        }
        cout << endl;
    }
}
int main()
{
    pattern1();
    return 0;
}