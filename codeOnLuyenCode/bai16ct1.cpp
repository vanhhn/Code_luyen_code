#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,m;
  cin>>h>>m;
  int ans=(24-h-1)*60+60-m;
  cout<<ans;
  return 0;
}