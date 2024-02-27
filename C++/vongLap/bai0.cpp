#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)cout<<i<<" ";
 cout<<"\n";
 for(int i=n;i>=0;i--)cout<<i<<" ";
 cout<<"\n";
 for(int i=0;i<=n;i+=2)cout<<i<<" ";
 cout<<"\n";
 for(int i=1;i<=n;i+=2)cout<<i<<" ";
 cout<<"\n";
 for(int i=0;i<=n;i+=4)cout<<i<<" ";
 cout<<"\n";
 for(int i=0;i<n;i++) cout<<(char)(i+97)<<" ";
 cout<<"\n";
 for(int i=123-n;i<=122;i++)cout<<(char)(i)<<" ";
 return 0;
}