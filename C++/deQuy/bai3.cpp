#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tinhTong(int n){
  if(n==1) return 1;
  return n*n*n+tinhTong(n-1);
}
int main(){
  int n;
  cin>>n;
  cout<<tinhTong(n);
  return 0;
}