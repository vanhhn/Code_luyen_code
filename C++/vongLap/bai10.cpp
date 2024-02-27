#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long ans=1;
  for(int i=1;i*i<=n;i++){
      if(n%i==0){
        ans*=i;
        if(i!=n/i){
          ans*=n/i;
        }
      }
  }
  cout<<ans;
  return 0;
}