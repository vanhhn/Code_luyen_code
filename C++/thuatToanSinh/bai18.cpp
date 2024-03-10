#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s="0000000000000000000";
int ok;
vector<string>v;
vector<ll>ans;
void sinh(){
  int i=s.size()-1;
  while(i>=0&&s[i]=='8'){
    s[i]='0';
    i--;
  }
  if(i<0){
    ok=0;
  }
  else{
    s[i]='8';
  }
}
int main(){
  ok=1;
  sinh();
  while(ok){
    v.push_back(s);
    sinh();
  }
  for(int i=1;i<=300;i++){
    for(string x:v){
      ll tmp=stoll(x);
      if(tmp%i==0){
        ans.push_back(tmp);
        break;
      }
    }
  }
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<ans[n-1]<<"\n";
  }
  return 0;
}