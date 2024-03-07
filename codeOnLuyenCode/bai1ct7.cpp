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
  cout<<mp.size();
  return 0;
}