#include<iostream>
using namespace std;
int main(){
    string name[10];
    for (int i = 0; i < 10; i++){
         cout << "Enter the name " << i+1 << ": ";
         cin >> name[i];
    }
    for (int j=0; j <10; j++) 
    {
        cout << "Name " << j+1 << " : " << name[j] << endl;
    }
    
}