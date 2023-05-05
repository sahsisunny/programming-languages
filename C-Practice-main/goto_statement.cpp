#include<iostream>
using namespace std;
int main(){
    
    eligible:
    int age;
        cout << "Enter the age: ";
        cin >> age;
        if (age<18){
            goto eligible;
        }else{
            cout << "You are eligible" << endl;
        }
    
    return 0;
}