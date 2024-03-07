#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001

int a[MAX],b[MAX];
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    b[a[i]]++;
  }
  int ok=0;
  for(int i=0;i<n;i++){
    if(b[a[i]]>1){
      cout<<a[i];
      ok=1;
      break;
    }
  }
  if(!ok){
    cout<<-1;
  }
  return 0;
}