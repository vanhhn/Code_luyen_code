#include<bits/stdc++.h>
using namespace std;
int checkChiaHet3(string s){
  int sum=0;
  for(char c:s)sum+=c-'0';
  return sum%3==0;
}
int checkChiaHet5(string s){
  int x=s.size()-1;
  return s[x]=='0'||s[x]=='5';
}
int main(){
  string s;
  cin>>s;
  cout<<(checkChiaHet3(s)&&checkChiaHet5(s)?"YES":"NO");
  return 0;
}