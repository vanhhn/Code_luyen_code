#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  cin>>n;
  int a[n];
  ll res1=0,res2=0;
  for(int &x:a)cin>>x;
  sort(a,a+n);
  for(int i=0;i<n;i+=2){
    res1=res1*10+a[i];
  }
  for(int i=1;i<n;i+=2){
    res2=res2*10+a[i];
  }
  cout<<res1+res2<<"\n";
  return 0;
}