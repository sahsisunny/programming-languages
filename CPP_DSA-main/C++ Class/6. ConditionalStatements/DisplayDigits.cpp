#include<iostream>
using namespace std;
void dispDigit(){
    int num;
    cout<<"Enter the numbers: ";
    cin>>num;
    if (num==1){
        cout<<"One";
    }else if (num==2){
        cout<<"Two";
    }else if (num==3){
        cout<<"Three";
    }else if (num==4){
        cout<<"Four";
    }else if (num==5){
        cout<<"Five";
    }else if (num==6){
        cout<<"Six";
    }else if (num==7){
        cout<<"Seven";
    }else if (num==8){
        cout<<"Eight";
    }else if (num==9){
        cout<<"Nine";
    }else if (num==10){
        cout<<"Ten";
    }else {
        cout<<"Please enter the valid number between 1-10";
    }
}
int main(){
    dispDigit();
    return 0;
}