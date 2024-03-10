#include<bits/stdc++.h>
using namespace std;
string a="28tech";
bool check(char c){
 for(char x:a){
  if(c==x){
    return true;
  }
 }
 return false;
}
int main(){
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(check(s[i])){
      s.erase(i,1);
      i--;
    }
  }
  if(s==""){
    cout<<"EMPTY";
  }
  else{
    cout<<s;
  }
  return 0;
}