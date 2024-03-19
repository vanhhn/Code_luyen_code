#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    { 
      int n;
      cin>>n;
      n-=1;
      int x=n/3*3;
      int y=n/5*5;
      int z=n/15*15;
      ll sum3=1ll*x*(x+3)/6;
      ll sum5=1ll*y*(y+5)/10;
      ll sum15=1ll*z*(z+15)/30;
      cout<<sum3+sum5-sum15<<"\n";
    }
    return 0;
}