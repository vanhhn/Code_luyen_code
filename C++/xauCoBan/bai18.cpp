#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
  if(a.size()==b.size()){
    return a<b;
  }
  return a.size()<b.size();
}
int main(){
  string s;
  getline(cin,s);
  stringstream ss(s);
  vector<string>v;
  string token;
  while(ss>>token){
    v.push_back(token);
  }
  sort(v.begin(),v.end(),cmp);
  for(string s:v)cout<<s<<" ";
  return 0;
}