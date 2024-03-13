#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll a[94];
void sinh(){
  a[0]=a[1]=1;
  for(int i=2;i<94;i++){
    a[i]=a[i-2]+a[i-1];
  }
}
int main(){
  sinh();
  int n;
  cin>>n;
  cout<<a[n];
  return 0;

}