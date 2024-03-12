#include<bits/stdc++.h>
using namespace std;
int main(){
  int mafre=INT_MIN,mifre=INT_MAX;
  char a,b;
  string s;
  getline(cin,s);
  map<char,int>mp;
  for(char c:s){
    mp[c]++;
  }
  for(auto it:mp){
    if(it.second>=mafre){
      a=it.first;
      mafre=it.second;
    }
    if(it.second<=mifre){
      b=it.first;
      mifre=it.second;
    }
  }
  cout<<a<<" "<<mafre<<"\n"<<b<<" "<<mifre;
  system("pause");
  return 0;
}