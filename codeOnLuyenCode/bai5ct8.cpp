#include<bits/stdc++.h>
using namespace std;
int ans[10];
int main(){
  int n;
  cin>>n;
  string a[n];
  for(string &x:a){
    cin>>x;
    for(char c:x){
      ans[c-'0']++;
    }
  }
  for(int i=0;i<10;i++){
    if(ans[i]){
      cout<<i<<" ";
    }
  }
  return 0;
}