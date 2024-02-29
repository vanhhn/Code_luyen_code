#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
int arr[MAX];
void snt(){
  memset(arr,1,sizeof(arr));
  arr[0]=arr[1]=0;
  for(int i=2;i*i<MAX;i++){
    if(arr[i]){
      for(int j=i*i;j<MAX;j+=i){
        arr[j]=0;
      }
    }
  }
}
int main(){
  snt();
  int a,b;
  cin>>a>>b;
  if(a>b){
    swap(a,b);
  }
  for(int i=a+1;i<b;i++){
    if(arr[i]){
       cout<<i<<" ";
    }
  }
  return 0;
}