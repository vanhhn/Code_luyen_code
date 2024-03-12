#include<bits/stdc++.h>
using namespace std;
int tinhTongChuSo(string s){
  int sum=0;
  for(char c:s)sum+=c-'0';
  return sum;
}
int main(){
  string s;
  cin>>s;
  cout<<tinhTongChuSo(s);
  return 0;
}