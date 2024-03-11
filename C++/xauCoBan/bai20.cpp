#include<bits/stdc++.h>
using namespace std;
bool checkThuanNghich(string s){
  int l=0,r=s.size()-1;
  while(l<=r){
    if(s[l]!=s[r]){
      return false;
    }
    else{
      l++;
      r--;
    }
  }
  return true;
}
int main(){
  string s;
  getline(cin,s);
  vector<string>v;
  string token;
  stringstream ss(s);
  while(ss>>token){
    if(checkThuanNghich(token)){
      v.push_back(token);
    }
  }
  sort(v.begin(),v.end());
  for(string s:v){
    cout<<s<<" ";
  }
  return 0;
}