#include<bits/stdc++.h>
using namespace std;
int cnt[256];
int main(){
  string s;
  getline(cin,s);
  int ok=1;
  for(char c:s)cnt[toupper(c)]++;
  for(int i=65;i<91;i++){
    if(!cnt[i]){
      cout<<"NO";
      ok=0;
      break;
    }
  }
  if(ok)cout<<"YES";
  system("pause");
  return 0;
}