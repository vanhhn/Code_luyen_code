#include<bits/stdc++.h>
using namespace std;
int check(int a[4]){
  int q=a[1]/a[0];
  for(int i=0;i<3;i++){
     if(a[i]*q!=a[i+1]){
      return 0;
     }
  }
  return 1;
}
int main(){
  int a[4];
  for(int i=0;i<4;i++)cin>>a[i];
  if(check(a)){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  return 0;

}