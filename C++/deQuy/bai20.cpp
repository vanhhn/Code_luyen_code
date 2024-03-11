#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool checkMangDoiXung(int a[],int n,int l,int r){
  if(l>=r){
    return true;
  }
  else if(a[l]!=a[r]){
    return false;
  }
  else{
    return checkMangDoiXung(a,n,l+1,r-1);
  }
}
int main(){
   int n;
   cin>>n;
  int a[n];
  for(int &x:a)cin>>x;
  cout<<(checkMangDoiXung(a,n,0,n-1)?"YES":"NO");
  return 0;
}