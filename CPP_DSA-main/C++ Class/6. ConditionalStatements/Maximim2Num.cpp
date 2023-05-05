#include<iostream>
using namespace std;
void maxNum(){
    float num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    if(num1>num2){
        cout<<num1<<" is Greatest";
    }
    else{
        cout<<num2<<" is Greatest";
    }
}
int main(){
    maxNum();
    return 0;
}