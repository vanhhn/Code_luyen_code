#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  stringstream ss(s);
  string token;
  map<string,int>mp;
  int mafre=INT_MIN,mifre=INT_MAX;
  string a,b;
  while(ss>>token){
    mp[token]++;
  }
  for(auto it:mp){
    if(mafre<=it.second){
      a=it.first;
      mafre=it.second;
    }
    if(mifre>=it.second){
      mifre=it.second;
      b=it.first;
    }
  }
  cout<<a<<" "<<mafre<<"\n"<<b<<" "<<mifre;
  system("pause");
  return 0;

  }