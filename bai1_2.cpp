#include<bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,c;
  cin>>a>>b>>c;
  long long ans=(1LL)*a*(b+c)+(1LL)*b*(a+c);
  cout<<ans;
}