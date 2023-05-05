#include<iostream>
using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r",stdin);
      freopen("output.txt", "w",stdout);
  #endif

  int a,b,c;
  cin>>a>>b>>c;

  if(a>b)
  {
    if(a>c)
    {
      cout<<"A is Maximum Number\n";
    }
    else
    {
      cout<<"C is Maximum Number\n";
    }
  }
  else
  {
    if(b>c)
    {
      cout<<"B is Maximum Number\n";
    }
    else
    {
      cout<<"C is Maximum Number\n";
    }
  }
  return 0;
}