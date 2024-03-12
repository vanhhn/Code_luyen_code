#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  map<char,int>mp;
  for(char c:s){
    mp[c]++;
  }
  for(auto it:mp){
    cout<<it.first<<" "<<it.second<<"\n";
  }
  cout<<"\n";
  for(char c:s){
    if(mp[c]!=0){
      cout<<c<<" "<<mp[c]<<"\n";
      mp[c]=0;
    }
  }
  system("pause");
  return 0;
}