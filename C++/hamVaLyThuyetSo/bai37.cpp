#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[93];
void sinh()
{
  a[0] = 0;
  a[1] = 1;
  for (int i = 2; i < 93; i++)
  {
    a[i] = a[i - 1] + a[i - 2];
  }
}
int main(){
  ll n;
  cin>>n;
  for(int i=0;i<93;i++){
    if(a[i]>=n){
      cout<<a[i];
      break;
    }
  }
  return 0;
}