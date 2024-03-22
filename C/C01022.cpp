#include<stdio.h>
#include<string.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
   char c[10];
   scanf("%s",&c);
   int sum=0;
   for(int i=0;i<strlen(c);i++){
    sum+=c[i]-'0';
   }
   printf("%d\n",sum);
  }
   return 0;
}