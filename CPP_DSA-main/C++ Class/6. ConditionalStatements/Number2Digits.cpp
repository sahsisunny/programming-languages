#include<iostream>
using namespace std;
void DispDigits(){
    int number;
    cout<<"Enter the Digits: ";
    cin>>number;
    switch(number){
        case 1:
            cout<<"One";
            break;
        case 2:
            cout<<"Two";
            break;
        case 3:
            cout<<"Three";
            break;
        case 4:
            cout<<"Four";
            break;
        case 5:
            cout<<"Five";
            break;
        default:
            cout<<"Number from 1-5";
    }
    
}
int main(){
    DispDigits();
    return 0;
}