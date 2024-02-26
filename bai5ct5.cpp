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
  for(auto it:mp){
    cout<<it.first<<" "<<it.second<<"\n";
  }
  cout<<"\n";
  for(int i=0;i<n;i++){
    if(mp[a[i]]!=0){
      cout<<a[i]<<" "<<mp[a[i]]<<"\n";
      mp[a[i]]=0;
    }
  }
  return 0;
}