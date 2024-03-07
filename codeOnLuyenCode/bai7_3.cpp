#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
int a[MAX];
void snt(){
  memset(a,1,sizeof(a));
  a[0]=a[1]=0;
  for(int i=2;i*i<MAX;i++){
    if(a[i]){
      for(int j=i*i;j<MAX;j+=i){
        a[j]=0;
      }
    }
  }
}
int main(){
  snt();
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    for(int i=2;i<=n/2;i+=(i<3)?1:2){
      if(a[i]&&a[n-i]){
        cout<<i<<" "<<n-i<<"\n";
      }
    }
  }
  return 0;
}