#include<iostream>
#include<cmath>
using namespace std;
void NatOfQuadEq(){
    float a,b,c,desc,root1,root2,eq1,eq2;
    cout<<"Enter the Coefficient of a:  ";
    cin>>a;
    cout<<"Enter the Coefficient of b:  ";
    cin>>b;
    cout<<"Enter the Coefficient of c:  ";
    cin>>c;
    desc=b*b-4*a*c;
    if (desc==0 ){
        cout<<"Roots are real and Equal\n";
        eq1=-b/(2*a);
        cout<<"Root of Quadratic Equation is: "<<eq1;
    }else if (desc>0)
    {
        cout<<"Roots are real and Uneual\n";
        eq1=(-b+sqrt(b*b-4*a*c))/(2*a);
        eq2=(-b-sqrt(b*b-4*a*c))/(2*a);
        cout<<"Root of Quadratic Equation is(+) : " <<eq1;
        cout<<"\nRoot of Quadratic Equation is(-) : " <<eq2;
    }else{
        cout<<"Roots are Imiginary";
    }
}
int main(){
    NatOfQuadEq();
    return 0;
}