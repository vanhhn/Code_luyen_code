#include<stdio.h>
#include<math.h>
int main (){
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	int dt = b*b-4*a*c;
	if(dt<0){
		printf("NO");
	}
	else {
		if(dt==0){
			printf("%.2lf",-b/(2*a));
		}
		else printf("%.2lf %.2lf",(-b+sqrt(dt))/(2*a),(-b-sqrt(dt))/(2*a) );
		
	}
	return 0;
}
