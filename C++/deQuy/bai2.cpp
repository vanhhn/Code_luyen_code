#include<bits/stdc++.h>
using namespace std;
int tinhTong(int n){
  if(n==1) return 1;
  return n*n+tinhTong(n-1);
}
int main(){
  int n;
  cin>>n;
  cout<<tinhTong(n);
  return 0;
}