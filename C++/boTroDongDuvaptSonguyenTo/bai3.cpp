#include<bits/stdc++.h>
using namespace std;
#define ll long long
void phan_tich1(ll n){
  for(int i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      cout<<i<<" ";
      while(n%i==0){
        n/=i;
      }
    }
  }
  if(n!=1){
    cout<<n;
  }
  cout<<"\n";
}
void phan_tich2(ll n){
    for(int i=2;i*i<=n;i+=(i<3)?1:2){
      if(n%i==0){
        int d=0;
        while(n%i==0){
          d++;
          n/=i;
        }
        cout<<"("<<i<<", "<<d<<") ";
      }
    }
    if(n!=1){
      cout<<"("<<n<<", "<<1<<") ";
    }
    cout<<"\n";
}
void phan_tich3(ll n){
  for(int i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      while(n%i==0){
        cout<<i;
         n/=i;
        if(n>1){
          cout<<" x ";
        }
       
      }
    }
  }
  if(n!=1){
    cout<<n;
  }
}
int main(){
   ll n;
   cin>>n;
   phan_tich1(n);
   phan_tich2(n);
   phan_tich3(n);
   return 0;
}