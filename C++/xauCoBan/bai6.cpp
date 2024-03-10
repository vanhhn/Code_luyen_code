#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  while(s[0]=='0'&&s.size()>1){
    s.erase(0,1);
  }
  cout<<s;
  return 0;
}