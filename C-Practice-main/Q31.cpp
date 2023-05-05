#include<iostream>
using namespace std;
inline int mul(int n){
    return n * n;
}
inline int cube(int n){
    return n * n * n;
}
int main(){
    int x;
    cout << "Enter the Number: ";
    cin >> x;
    cout << "Square is: " << mul(x);
    cout << "\nCubes is: " << cube(x);
}
