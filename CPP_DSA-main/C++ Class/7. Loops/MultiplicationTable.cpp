#include<iostream>
using namespace std;
void MultiTable(){
    int i=1,num;
    cout<<"Enter the Number: ";
    cin>>num;
    // for(i=1;i<=10;i++){
    //     cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    // }
    // while(i<=10){
    //     cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    //     i++;
    // }
    do{
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    }while(i<=10);
}
int main(){
    MultiTable();
    return 0;
}