#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  cin>>n;
  double e=0;
  for(int i=0;i<=n;i++){
    ll tmp=1;
    for(int j=1;j<=i;j++){
      tmp*=j;
    }
    e+=1.0/tmp;
  }
  printf("%.2f",e);
  return 0;
}