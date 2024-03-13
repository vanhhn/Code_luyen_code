#include<bits/stdc++.h>
using namespace std;
int ok,n;
string s;
void in(){
  for(int i=0;i<s.size();i++){
    cout<<s[i];
  }
  cout<<"\n";
}
void sinh(){
  int i=n-1;
  while(i>=0&&s[i]=='1'){
    s[i]='0';
    i--;
  }
  if(i<0){
    ok=0;
  }
  else{
    s[i]='1';
  }
}
int main(){
  cin>>n;
  s=string(n,'0');
   ok=1;
  while(ok){
    in();
    sinh();
  }
  return 0;
}