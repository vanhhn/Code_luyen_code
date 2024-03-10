#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int ans=0;
  for(char c:s){
    if(isdigit(c)){
      ans+=c-'0';
    }
  }
  cout<<ans;
  return 0;
}