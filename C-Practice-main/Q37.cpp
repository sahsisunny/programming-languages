#include<iostream>
using namespace std;
class box{
    int w, h, b;
    public:
    box(){
        w = 7;
        h = 4;
        b = 5;
    }
    box(box &c){
        cout << "Copy Constructor";
        w = c.w;
        h = c.h;
        b = c.b;
    }
    void putData(){
        cout << "\nResult is: " << w * h * b;
    }
};
int main(){
    box b;
    box b1(b);
    b1.putData();
    return 0;
}