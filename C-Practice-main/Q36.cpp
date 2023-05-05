#include<iostream>
using namespace std;
class box{
    int w, h, b;
    public:
    box(int width, int height, int bidth){
        cout << "Parameterized Constructor";
        w = width;
        h = height;
        b = bidth;
    }
    void putData(){
        cout << "\nResult is: " << w * h * b;
    }
};
int main(){
    box b(7,4,5);
    b.putData();
    return 0;
}