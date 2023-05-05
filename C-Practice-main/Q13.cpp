#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter the First Number: ";
    cin >> num1;
    cout << "Enter the Second Number: ";
    cin >> num2;
    cout << "Addition is : " << num1+num2<<endl;
    cout << "Subtraction is : " << num1-num2<<endl;
    cout << "Multiplication is : " << num1*num2<<endl;
    cout << "Division is : " << float(num1)/float(num2)<<endl;
    cout << "Modulus is : " << num1%num2<<endl;
}