#include<iostream>
#include<cmath>
using namespace std;
void quad(){
    float a,b,c,eq1,eq2;
    cout<<"Enter the Coefficient of a:  ";
    cin>>a;
    cout<<"Enter the Coefficient of b:  ";
    cin>>b;
    cout<<"Enter the Coefficient of c:  ";
    cin>>c;
    eq1=(-b+sqrt(b*b-4*a*c))/(2*a);
    eq2=(-b-sqrt(b*b-4*a*c))/(2*a);
    // eq=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"Root of Quadratic Equation is(+) : " <<eq1;
    cout<<"\nRoot of Quadratic Equation is(-) : " <<eq2;
}
int main(){
    quad();
    return 0;
}