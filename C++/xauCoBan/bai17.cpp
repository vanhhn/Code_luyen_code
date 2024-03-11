#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  stringstream ss(s);
  vector<string>v;
  string token;
  while(ss>>token){
    v.push_back(token);
  }
  sort(v.begin(),v.end());
  for(string s:v){
    cout<<s<<" ";
  }
  cout<<"\n";
  sort(v.begin(),v.end(),greater<string>());
  for(string s:v){
    cout<<s<<" ";
  }
  return 0;
}