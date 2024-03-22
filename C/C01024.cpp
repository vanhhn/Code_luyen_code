#include<stdio.h>
#include<string.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    char c[10];
    scanf("%s",&c);
    int l=strlen(c);
    if(c[0]==c[l-1]){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;

}