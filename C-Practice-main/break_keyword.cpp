#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int i = 1;
    do{
        cout << num<<"*"<<i<<"="<<num*i<<endl;
        if (i==5)
        {
            break;  //Break Statement
        }
        
        i++;
    } while (i <= 10);
    return 0;
}