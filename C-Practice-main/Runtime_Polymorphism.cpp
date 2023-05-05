#include<iostream>
using namespace std;
class base{
    public:
    void show(){
        cout << "\nFrom Base Class";
    }
};
class derived:public base{
    public:
    void show(){
        cout << "\nFrom Derived Class";
    }
};
int main(){
    derived d1;
    d1.show();
    return 0;
}