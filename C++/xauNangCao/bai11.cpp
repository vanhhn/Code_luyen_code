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
  string token;
  vector<string>v;
  while(ss>>token){
    v.push_back(token);
  }
  sort(v.begin(),v.end());
  for(string x:v)cout<<x<<" ";
  cout<<"\n";
  sort(v.begin(),v.end(),cmp);
  for(string x:v)cout<<x<<" ";
  system("pause");
  return 0;
}