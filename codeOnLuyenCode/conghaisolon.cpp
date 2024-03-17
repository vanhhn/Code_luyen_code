#include<bits/stdc++.h>
using namespace std;
string add(string a,string b){
  while(a.size()<b.size())a="0"+a;
  while(b.size( )<a.size())b= "0"+b;
  int n=a.size(),nho=0;
  string ans="";
  for(int i=n-1;i>=0;i--){
    int so=a[i]-'0'+b[i]-'0'+nho;
    nho=so/10;
    ans=(char)(so%10+'0')+ans;
  }
  if(nho>0)ans="1"+ans;
  return ans;
}
int main(){
  string a,b;
  cin>>a>>b;
  cout<<add(a,b);
  return 0;
}