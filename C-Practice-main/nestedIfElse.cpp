#include<iostream>
using namespace std;
int main(){
    int money;
    cin >> money;
    if (money>10000){
        cout << "Neha\n";
        if(money>10000){
            cout << "Roadtrip with neha\n";
        }else{
            cout << "Shopping with Neha\n";
        }
    }else if(money>5000){
        cout << "Rashmi\n";
    }else{
        cout << "Friends\n";
    }

    return 0;
}