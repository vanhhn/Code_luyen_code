#include<stdio.h>
#include<math.h>
int checkChinhPhuong(int n){
  int x=(int)sqrt(n);
  if(x*x==n||(x+1)*(x+1)==n) return 1;
  return 0;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  int n;
  scanf("%d",&n);
  if(checkChinhPhuong(n)){
   printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  }
  return 0;
}