#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int &x:a)cin>>x;
  int tienThua=a[0];
  for(int i=0;i<n;i++){
    tienThua+=a[i];
    if(a[i]>25){
      tienThua-=(tienThua-25);
    }
    if(tienThua<0){
      break;
    }
  }
  if(tienThua==0){
    cout<<"NO";
  }
  else{
    cout<<"YES";
  }
}