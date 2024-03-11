#include<bits/stdc++.h>
using namespace std;
int tim(int a[],int n,int x,int l,int r){
  if(l>r){
    return 0;
  }
  int m=(l+r)/2;
  if(a[m]==x){
    return 1;
  }
  else if(a[m]<x){
    return tim(a,n,x,m+1,r);
  }
  else{
    return tim(a,n,x,l,m-1);
  }
}
int main(){
  int n,x;
  cin>>n;
  int a[n];
  for(int &x:a)cin>>x;
  cin>>x;
  cout<<tim(a,n,x,0,n-1);
  return 0;
}