#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
  if(b==0) return a;
  return gcd(b,a%b);
}
int lcm(int a,int b){
  return a/gcd(a,b)*b;
}
int main(){
  int a[4];
  for(int i=0;i<4;i++){
    cin>>a[i];
  }
  int ans1=a[0],ans2=1;
  for(int i=0;i<4;i++){
    ans1=gcd(ans1,a[i]);
    ans2=lcm(ans2,a[i]);
  }
  cout<<ans1<<" "<<ans2;
  return 0;
  }