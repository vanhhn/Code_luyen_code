#include<bits/stdc++.h>
using namespace std;
int tongChuSo(int n){
  int sum=0;
  while(n!=0){
    sum+=n%10;
    n/=10;
  }
  return sum;
}
bool cmp(int a,int b){
  int x=tongChuSo(a);
  int y=tongChuSo(b);
  if(x==y){
    return a<b;
  }
  else{
    return x<y;
  }
}
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int &x:a)cin>>x;
 sort(a,a+n,cmp);
 for(int &x:a){
  cout<<x<<" ";
 }
 return 0;
}