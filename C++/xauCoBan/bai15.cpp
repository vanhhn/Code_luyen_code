#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  vector<string>v;
  string tmp;
  stringstream ss(s);
  while(ss>>tmp){
    v.push_back(tmp);
  }
  for(int i=0;i<v.size();i++){
    if(i%2==1){
      reverse(v[i].begin(),v[i].end());
    }
  }
  for(int  i=0;i<v.size();i++){
    if(i!=v.size()-1){
      cout<<v[i]<<" ";
    }
    else{
      cout<<v[i];
    }
  }
  return 0;
}