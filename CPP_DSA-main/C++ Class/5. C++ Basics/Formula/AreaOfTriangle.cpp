#include<iostream>
using namespace std;

void triangle(){
    float a,b,h;
    cout<<"Enter the Base:  ";
    cin>>b;
    cout<<"Enter the Height:  ";
    cin>>h;
    a=0.5*(b*h);
    cout<<"Area of Triangle is : "<<a;
}
int main(){
    triangle();
    return 0;
}