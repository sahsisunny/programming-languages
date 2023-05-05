#include<iostream>
using namespace std;
int main(){

    string name;
    string msg="Welcome to C++ Tutorial Mr.";
    
    cout<<"Enter the Name: ";
    
    // cin>>name;       //method-1  for only one word
    getline(cin,name);  //method-2 for full line

    cout<<msg<<" "<<name;


    
    return 0;
}