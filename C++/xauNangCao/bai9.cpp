#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  stringstream ss(s);
  string token;
  int ans=0;
  while(ss>>token){
    ans++;
  }
  cout<<ans;
  system("pause");
  return 0;
}