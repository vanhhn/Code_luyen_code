#include<bits/stdc++.h>
using namespace std;
int checkChiaHet2(string s){
  int l=s.size()-1;
  return (s[l]-'0')%2==0;
}
int checkChiaHet3(string s){
  int sum=0;
  for(char c:s)sum+=c-'0';
  return sum%3==0;
}
int main(){
  string s;
  cin>>s;
  cout<<(checkChiaHet2(s)&&checkChiaHet3(s)?"YES":"NO");
  return 0;
}