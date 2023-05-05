#include<iostream>
using namespace std;
void findASCII(){
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    cout << "ASCII value of "<<ch<<" is: " << int(ch) << endl;
}
int main(){
    findASCII();
    return 0;
}