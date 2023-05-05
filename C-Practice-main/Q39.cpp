#include<iostream>
using namespace std;
class a{
    int a;
    public:
    void getA(){
        cout << "\nEnter the Value of A: ";
        cin >> a;
    }
    void putA(){
        cout << "\nValue of A is: " << a;
    }
};
class b :public a{
    int b;
    public:
    void getB(){
        cout << "\nEnter the Value of B: ";
        cin >> b;
    }
    void putB(){
        cout << "\nValue of B is: " << b;
    }
};
int main(){
    b a1;
    a1.getA();
    a1.getB();
    a1.putA();
    a1.putB();
    return 0;
}