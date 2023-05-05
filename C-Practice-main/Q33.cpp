#include<iostream>
using namespace std;
class box{
    int width, height, bidth;
    public:
    box(){
        width = 5;
        height = 7;
        bidth = 3;
    }
    void putValue(){
        cout << "Result is: " << width * height * bidth;
    }
    ~box(){
        cout << "\nDestructor here!!!";
    }
};
int main(){
    box b;
    b.putValue();
    return 0;
}