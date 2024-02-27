#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  cin>>n;
  double ans=1;
  for(int i=1;i<=n-1;i++){
    ll tmp=1;
    for(int j=1;j<=i;j++){
      tmp*=j;
    }
    ans+=1.0/tmp;
  }
  printf("%.4f",ans);
  return 0;
}