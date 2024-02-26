#include<bits/stdc++.h>
using namespace std;
int main(){
  double x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  double in=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
  double ans=pow(in,0.5);
  printf("%.2f",ans);
  return 0;
}