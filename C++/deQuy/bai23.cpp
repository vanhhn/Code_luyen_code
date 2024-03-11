#include<bits/stdc++.h>
using namespace std;
bool checkTangDan(int a[],int n){
  if(n==1){
    return true;
  }
  if(a[n-1]<=a[n-2]){
    return false;
  }
  return checkTangDan(a,n-1);
}
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int &x:a)cin>>x;
  cout<<(checkTangDan(a,n)?"YES":"NO");
  return 0;
}