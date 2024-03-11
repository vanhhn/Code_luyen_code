#include<bits/stdc++.h>
using namespace std;
int n,ok;
string s;
void sinh(){
  int i=s.size()-1;
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
  vector<string>v;
  cin>>n;
  for(int i=1;i<=n/2;i++){
    ok=1;
    s=string(i,'0');
    while(ok){
      string t=s;
      reverse(t.begin(),t.end());
      v.push_back(s+t);
      sinh();
    }
  }
  sort(v.begin(),v.end());
  for(string x:v)cout<<x<<"\n";
  return 0;
}