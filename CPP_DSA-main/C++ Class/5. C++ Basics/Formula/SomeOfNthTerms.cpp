#include<iostream>
using namespace std;
void sum(){
    int number,s;
    cout<<"Enter the nth Term:  ";
    cin>>number;
    s=number*(number+1)/2;
    cout<<"Sum is "<<s;
}
int main(){
    sum();
    return 0;
}