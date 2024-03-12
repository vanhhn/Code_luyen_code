#include<bits/stdc++.h>
using namespace std;
bool checkDoiXung(string s){
  int l=0,r=s.size()-1;
  while(l<=r){
    if(s[l]!=s[r]){
      return 0;
    }
    else{
      l++;
      r--;
    }
  }
  return 1;
}
int main(){
  string s;
  getline(cin,s);
  cout<<(checkDoiXung(s)?"YES":"NO");
  return 0;
}