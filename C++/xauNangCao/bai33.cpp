#include<bits/stdc++.h>
using namespace std;
bool checkThuanNghich(string s){
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
int checkSo6(string s){
  int d=0;
  for(char c:s){
    if(c=='6')d++;
  }
  return d>=1;
}
int main(){
  string s;
  cin>>s;
  cout<<(checkSo6(s)&&checkThuanNghich(s)?"YES":"NO");
  return 0;
}