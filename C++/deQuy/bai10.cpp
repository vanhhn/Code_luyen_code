#include<bits/stdc++.h>
using namespace std;
double tinhTong(int n){
  if(n==1) return 1;
  return 1.0/n+tinhTong(n-1);
}
int main(){
  int n;
  cin>>n;
  printf("%.3f",tinhTong(n));
  return 0;
}