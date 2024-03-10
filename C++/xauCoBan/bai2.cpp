#include<bits/stdc++.h>
using namespace std;
string latNguoc(string s){
  string ans="";
  for(int i=s.size()-1;i>=0;i--){
    ans+=s[i];
  }
  return ans;
}
string vietThuong(string s){
  for(int i=0;i<s.size();i++){
    s[i]=tolower(s[i]);
  }
  return s;
}
string vietHoa(string s){
  for(int i=0;i<s.size();i++){
    s[i]=toupper(s[i]);
  }
  return s;
}

int main(){
  string s;
  cin>>s;
  cout<<latNguoc(s)<<"\n"<<vietThuong(s)<<"\n"<<vietHoa(s);
  return 0;
}