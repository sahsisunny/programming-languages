#include<iostream>
using namespace std;
int main(){
    int num[5];
    for (int i=1; i <=5; i++) 
    {
        cout << "Enter the 5 Number " << i << ": ";
        cin >> num[i];
    }
    for (int j=1; j <=5; j++) 
    {
        cout << "Number " << j << ":" << num[j] << endl;
    }
    
}