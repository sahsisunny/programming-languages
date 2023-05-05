#include<iostream>
using namespace std;
inline int add(int a,int b){
    return a + b;
}
inline int sub(int a,int b){
    return a - b;
}
inline int mul(int a,int b){
    return a * b;
}
inline float divi(float a,float b){
    return a / b;
}
int main(){
    int x, y;
    cout << "Enter the First Number: ";
    cin >> x;
    cout << "Enter the Second Number: ";
    cin >> y;
    cout << "Addition is: " << add(x,y) << endl;
    cout << "Subtraction is: " << sub(x,y) << endl;
    cout << "Multiplication is: " << mul(x,y) << endl;
    cout << "Division is: " << divi(x,y) << endl;
    return 0;
}
