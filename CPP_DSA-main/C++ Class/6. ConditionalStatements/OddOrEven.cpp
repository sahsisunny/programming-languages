#include<iostream>
using namespace std;
void oddEven(){
    int num;
    
    cout<<"Enter the number: ";
    cin>>num;
    if ((num%2)==0){
        cout<<"Number is Even";
    }else{
        cout<<"Number is Odd";
    }

}
int main(){
    oddEven();
    return 0;
}