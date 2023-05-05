#include<iostream>
using namespace std;
inline int max(int a,int b){
    if (a>b)
    {
        return a;
    }else{
        return b;
    }
    
}
int main(){
    int x, y;
    cout << "Enter the First Number: ";
    cin >> x;
    cout << "Enter the Second Number: ";
    cin >> y;
    cout << "Greatest Number is : " << max(x, y);
    return 0;
}