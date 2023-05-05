#include<iostream>
using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r",stdin);
      freopen("output.txt", "w",stdout);
  #endif

  int a,b;
  cin>>a>>b;

  if(a>b){
    cout<<"A\n";
  }else{
    cout<<"B\n";
  }
  return 0;
}