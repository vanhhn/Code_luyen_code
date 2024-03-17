#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n){
  for(int i=0;i<n-1;i++){
    if(abs(a[i]-a[i+1])==1){
      return 0;
    }
  }
  return 1;
}
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    a[i]=i+1;
  }
  do{
    if(check(a,n)){
      for(int &x:a)cout<<x;
      cout<<"\n";
    }
  }while(next_permutation(a,a+n));
  return 0;

}