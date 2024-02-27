#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  cin>>n;
  ll ans=0;
  int a[n];
  for(int &x:a){
    cin>>x;
    if(x%2==0){
      ans+=x;
    }
  }
  cout<<ans;
  return 0;
}