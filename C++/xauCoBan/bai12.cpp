#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  stringstream ss(s);
  string token;
  vector<string>v;
  int ans=0;
  while(ss>>token){
    v.push_back(token);
  }
  for(string c:v){
    if(c[0]>='A'&&c[0]<='Z'){
      ans++;
    }
  }
  cout<<ans;
  return 0;
}