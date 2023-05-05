#include <iostream>
using namespace std;
void swapInteger()
{
    int num1, num2,temp;
    cout << "Enter the 1st Number: ";
    cin >> num1;
    cout << "Enter the 2nd Number: ";
    cin >> num2;
    cout<<"_________Before Swapping_________"<<endl;
    cout << "1st number is: " << num1<<endl;
    cout << "1st number is: " << num2<<endl;;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"_________After Swapping_________"<<endl;;
    cout << "1st number is: " << num1<<endl;;
    cout << "1st number is: " << num2<<endl;;
}
int main()
{
    swapInteger();
    return 0;
}