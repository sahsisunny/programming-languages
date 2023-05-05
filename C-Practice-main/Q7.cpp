#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter the Age: ";
    cin >> age;
    if (age>=18){
        cout << "You are Eligible for Voting";
    }
        else{
            cout << "You are not Eligible";
    }
}