#include<iostream>
using namespace std;
int main(){
    float const pi = 3.145;
    float radius,area;
    cout << "Enter the Radius of Circle: ";
    cin >> radius;
    area = pi * radius * radius;
    cout << "Area of Circle is : "<<area;
}