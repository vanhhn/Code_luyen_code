#include<bits/stdc++.h>
using namespace std;
int tinhTong(int n){
  if(n==0) return 0;
  if(n%2==0){
    return n+tinhTong(n-1);
  }
  else{
    return -1*n+tinhTong(n-1);
  }

}
int main(){
  int n;
  cin>>n;
  cout<<tinhTong(n);
  return 0;
}