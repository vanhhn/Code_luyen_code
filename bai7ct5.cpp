#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  map<int,int>mp;
  for(int &x:a){
    cin>>x;
    mp[x]++;
  }
  long long ans=0;
  for(auto it:mp){
    if(it.second>1){
      ans+=it.second*(it.second-1)/2;
    }
  }
  cout<<ans;
  return 0;
}