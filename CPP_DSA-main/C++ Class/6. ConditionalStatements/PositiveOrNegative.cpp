#include<iostream>
using namespace std;
void positiveNegative(){
    float num;
    cout<<"Enter the number: ";
    cin>>num;
    if (num<0){
        cout<<"Number is Negative";
    }else if(num==0){
        cout<<"Number is Zero";
    }else{
        cout<<"Number is Positive";
    }
    
}
int main(){
    positiveNegative();
    return 0;
}