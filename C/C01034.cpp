#include <stdio.h>
#include <math.h>
int main()
{
 
    int a,b;
    scanf("%d%d",&a,&b);
    int x=ceil(sqrt(a));
    int y=floor(sqrt(b));
    printf("%d\n",y-x+1);
    for(int i=x;i<=y;i++){
      printf("%d\n",i*i);
    }
   return 0;
}