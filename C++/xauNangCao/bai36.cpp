#include<bits/stdc++.h>
using namespace std;
int checkChiaHet4(string s){
  int l=s.size();
  if(l==1){
    return (s[0]-'0')%4==0;
  }
  int x=(s[l-2]-'0')*10+s[l-1]-'0';
  return x%4==0;
}
int main(){
  string s;
  cin>>s;
  cout<<(checkChiaHet4(s)?"YES":"NO");
  return 0;
}