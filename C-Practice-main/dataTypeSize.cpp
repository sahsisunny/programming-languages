#include<iostream>
using namespace std;
int main(){
    int a;  //Declaration
    a = 7; //Initiliasation
    cout << "Size of Int is : "<<sizeof(a)<<endl;

    float b = 7.5;  //Both
    cout << "Size of Float is : "<<sizeof(b)<<endl;

    char c;
    c = 'A';
    cout << "Size of Char is : "<<sizeof(c)<<endl;

    short int ai;
    ai = 24;
    cout << "Size of Short Int is : "<<sizeof(ai)<<endl;

    bool bo;
    bo= true;
    cout << "Size of Boolean is : "<<sizeof(bo)<<endl;
    return 0;
}