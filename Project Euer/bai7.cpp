#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define MAX 1000001
int a[MAX];
vector<int>primes;
void snt(){
  memset(a,1,sizeof(a));
  a[0]=a[1]=0;
  for(int i=2;i*i<MAX;i++){
    if(a[i]){
      for(int j=i*i;j<MAX;j+=i){
        a[j]=0;
      }
    }
  }
  for(int i=2;i<MAX;i+=(i<3?1:2)){
    if(a[i]){
      primes.push_back(i);
    }
  }
}
int main()
{    
    snt();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<primes[n-1]<<"\n";
    }
    return 0;
}