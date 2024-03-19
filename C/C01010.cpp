#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int y=n/365;
  n=n-y*365;
  int w=n/7;
  n=n-w*7;
  int d=n;
  printf("%d %d %d",y,w,d);
  return 0;
}