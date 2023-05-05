#include<iostream>
using namespace std;
void ShortCir(){
    int a=15,b=9,i=9;
    if(a<b && ++i<=a){
        cout<<i<<endl;
    }
}
int main(){
    ShortCir();
    cout<<"Program End.";
    return 0;
}