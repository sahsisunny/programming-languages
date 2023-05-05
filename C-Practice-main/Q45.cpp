#include<iostream>
using namespace std;
class base{
    public:
    void add(int a,int b){
        cout << "\nTwo Argument(INT), Sum of these two argument is : " << a + b;
    }
    void add(float a,float  b,float c){
        cout << "\nThree Argument(FLOAT), Sum of these two argument is : " << a + b + c;
    }
    void add(int a,float b,double c,long d){
        cout << "\nTwo Argument(int, float, double, long), Sum of these two argument is : " << a + b + c + d;
    }
};
int main(){
    base b1;
    b1.add(7,9);
    b1.add(5.5,6.2,12.25);
    b1.add(9,5.5,6.2,12.25);
    return 0;
}