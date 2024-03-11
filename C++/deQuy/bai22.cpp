#include<bits/stdc++.h>
using namespace std;
bool checkToanChan(int a[],int n){
  if(n==1){
    return a[0]%2==0;
  }
  if(a[n-1]%2==1){
    return false;
  }
  return checkToanChan(a,n-1);
}
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int &x:a)cin>>x;
  cout<<(checkToanChan(a,n)?"YES":"NO");
  return 0;
}