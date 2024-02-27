#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  double ans=0;
  for(int i=2;i<=2*n;i+=2){
    ans+=1.0/i;
  }
  printf("%.5f",ans);
  return 0;
}