#include<iostream>
using namespace std;
void youngOrNot(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age>=18 && age<=45){
        cout<<"You are Young!";
    }else{
        cout<<"You are not Young!!";
    }
}
int main(){
    youngOrNot();
    return 0;
}