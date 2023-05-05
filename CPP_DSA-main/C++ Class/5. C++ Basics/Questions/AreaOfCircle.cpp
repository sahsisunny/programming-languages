#include<iostream>
using namespace std;
void AreaOfCircle(){
    const float pi=3.14;
    float area, radius;
    cout<<"Enter the Radius of Circle: ";
    cin>>radius;
    area=pi*radius*radius;
    cout<<"Area of Circle is: "<<area;

}
int main(){
    AreaOfCircle();
}