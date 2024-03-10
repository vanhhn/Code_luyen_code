#include<bits/stdc++.h>
using namespace std;
bool checkSoDep(string s){
  for(int i=0;i<s.size()-1;i++){
    if(abs(s[i]-'0'-(s[i+1]-'0'))!=1){
      return false;
    }
  }
  return true;
}
int main(){
  string s;
  cin>>s;
  cout<<(checkSoDep(s)==true?"YES":"NO");
  return 0;
}