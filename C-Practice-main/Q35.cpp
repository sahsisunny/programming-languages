#include<iostream>
using namespace std;
class box{
    int w, h, b;
    public:
    box(){
        cout << "Default Constructor";
        w = 7;
        h = 4;
        b = 5;
    }
    void putData(){
        cout << "\nResult is: " << w * h * b;
    }
};
int main(){
    box b;
    b.putData();
    return 0;
}