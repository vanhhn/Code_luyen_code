#include<bits/stdc++.h>
using namespace std;
string chuanHoa(string s){
  string tmp="";
  for(char c:s)tmp+=tolower(c);
  return tmp;
}
int main(){
  string s;
  getline(cin,s);
  set<string>se;
  stringstream ss(s);
  string token;
  while(ss>>token){
    se.insert(chuanHoa(token));
  }
  cout<<se.size();
  return 0;
}