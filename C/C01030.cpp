#include<stdio.h>
void phanTich(int n){
  for(int i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
       while(n%i==0){
        printf("%d ",i);
        n/=i;
       }
    }
  }
  if(n!=1){
    printf("%d ",n);
  }
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    phanTich(n);
    printf("\n");
  }
  return 0;
}