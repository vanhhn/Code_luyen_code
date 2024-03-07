#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  int tong=a+b;
  int hieu=a-b;
  long long tich=(1LL)*a*b;
  cout<<tong<<"\n"<<hieu<<"\n"<<tich<<"\n";
  if(b==0){
      cout<<"INVALID";
  }
  else{
      printf("%.4f",(double)a*1.0/b);
  }
  return 0;
}