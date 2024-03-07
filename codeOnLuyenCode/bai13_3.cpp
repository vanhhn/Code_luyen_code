#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
int a[MAX];
void sangBienDoi(){
  for(int i=1;i<MAX;i++){
    a[i]=i;
  }
  for(int i=2;i*i<MAX;i++){
     if(a[i]==i){
      for(int j=i*i;j<MAX;j+=i){
      a[j]=i;
     }
     }
  }
}
int main(){
  sangBienDoi();
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<a[i]<<"\n";
  }
  return 0;
}