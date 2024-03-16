#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  vector<int>v(n+1,1);
  for(int &x:a)cin>>x;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      if(a[i]>a[j]){
        v[i]=max(v[i],1+v[j]);
      }
    }
  }
  cout<<*max_element(v.begin(),v.end());
  return  0;
}