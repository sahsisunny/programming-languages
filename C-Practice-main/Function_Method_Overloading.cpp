#include<iostream>
using namespace std;
class base{
    public:
    void test(){
        cout << "\nTest Method with No Arguments";
    }
    void test(int a){
        cout << "\nTest Method with one Argumetn: " << a;
    }
    void test(int a,int b){
        cout << "\nTest Method with two Argument, Sum of these two argument is : " << a + b;
    }
};
int main(){
    base b1;
    b1.test();
    b1.test(7);
    b1.test(5,6);
    return 0;
}