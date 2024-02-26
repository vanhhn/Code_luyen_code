#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
  if(a.second==b.second){
      return a.first<b.first;
  }
  return a.second<b.second;
}
int main(){
  int n;
  cin>>n;
  int a[n];
  pair<int,int>p[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    p[i].first=i;
    p[i].second=abs(a[i]);
  }
  sort(p,p+n,cmp);
  for(int i=0;i<n;i++){
    cout<<a[p[i].first]<<" ";
  }
  return 0;
}