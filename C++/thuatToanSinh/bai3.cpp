#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int &x:a)cin>>x;
  if(next_permutation(a,a+n)){
    for(int &x:a)cout<<x<<" ";
  }
  else{
    for(int i=1;i<=n;i++){
      cout<<i<<" ";
    }
  }
  return 0;
}