#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  map<int,int>mp;
  for(int i=0;i<n;i++){
     cin>>a[i];
     mp[a[i]]++;
  }
  int q;
  cin>>q;
  while(q--){
    int x;
    cin>>x;
    if(mp[x]!=0){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
  }
}