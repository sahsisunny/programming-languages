#include<iostream>
using namespace std;
class box{
    double w, h, d;
    public:
    box(){          //Default Constructor
        cout << "\nDefault Constructor";
        w = 5;
        h = 2;
        d = 3;
    }
    box(double w1, double h1, double d1){        //Parameterized Constructor
        cout << "\nParameterized Constructor";
        w = w1;
        h = h1;
        d = d1;
    }
    box(box &b){         //Copy Constructor
        cout << "\nCopy Constructor";
        w = b.w;
        h = b.h;
        d = b.d;
    }
    void volume(){      //Member Function
        cout << "\nVolume is: " << w * h * d;
    }
};
int main(){
    box b;              //Creating Object
    b.volume();         //Calling Function
    box b1(6, 3, 2);    //Creating new object for Parameterized Constructor
    b1.volume();        //Calling Function
    box b2(b);          // Creating Object and copy data from 'b' object;
    b2.volume();        //Calling Function
}