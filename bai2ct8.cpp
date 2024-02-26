#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  map<int,int>mp;
  int a[n];
  for(int &x:a){
    cin>>x;
    mp[x]++;
  }
  cout<<mp.size();
  return 0;
}