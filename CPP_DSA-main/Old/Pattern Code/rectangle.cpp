#include<iostream>
using namespace std;
int main(){
  int row,colmn;
  cout<<"Enter the Row: ";
  cin>>row;
  cout<<"Enter the Column: ";
  cin>>colmn;
  for(int i=1;i<=row;i++){
    for(int j=1;j<=colmn;j++){
      cout<<"*";
    }
    cout<<"\n";
  }
}