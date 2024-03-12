#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  stringstream ss(s);
  string token;
  map<string,int>mp;
  vector<string>v;
  while(ss>>token){
    mp[token]++;
    v.push_back(token);
  }
  for(auto it:mp){
    cout<<it.first<<" "<<it.second<<"\n";
  }
  cout<<"\n";
  for(string x:v){
    if(mp[x]!=0){
      cout<<x<<" "<<mp[x]<<"\n";
      mp[x]=0;
    }
  }
  system("pause");
  return 0;
}