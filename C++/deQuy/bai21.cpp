#include<bits/stdc++.h>
using namespace std;
void inTraiQuaPhai(int a[],int n){
  if(n==0){
    return ;
  }
  inTraiQuaPhai(a,n-1);
  cout<<a[n-1]<<" ";
}
void inPhaiQuaTrai(int a[],int n){
  if(n==0){
    return ;
  }
  cout<<a[n-1]<<" ";
  inPhaiQuaTrai(a,n-1);
}
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int &x:a)cin>>x;
  inTraiQuaPhai(a,n);
  cout<<"\n";
  inPhaiQuaTrai(a,n);
  return 0;
}