#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  map<char,int>mp;
  for(char c:s){
    mp[c]++;
  }
  int ok=0;
  for(char c:s){
    if(mp[c]>1){
      cout<<c;
      ok=1;
      break;
    }
  }
  if(!ok){
    cout<<"NONE";
  }
  return 0;
}