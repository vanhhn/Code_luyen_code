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
bool cmp(pair<string,int>a,pair<string,int>b){
  if(a.first.size()==b.first.size()){
    return a.second<b.second;
  }
  return a.first.size()<b.first.size();
}
int main(){
  string s;
  getline(cin,s);
  string token;
  stringstream ss(s);
  vector<pair<string,int>>v;
  int i=0;
  while(ss>>token){
       if(checkThuanNghich(token))v.push_back({token,i++});
  }
  sort(v.begin(),v.end(),cmp);
  for(auto it:v){
    cout<<it.first<<" ";
  }
  system("pause");
  return 0;
}