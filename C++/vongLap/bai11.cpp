#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  int ok=0;
  for(int &x:a){
    cin>>x;
    if(x==2022){
      ok=1;
    }
    }
    cout<<(ok==1?"YES":"NO");
    return 0;
  
}