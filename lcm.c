#include<stdio.h>
int main(){
	int a,b,max,lcm;
	scanf("%d %d",&a,&b);
	max= (a>b) ? a:b;
	lcm=max;
	while((lcm%a!=0) || (lcm%b!=0)){
		lcm=lcm+max;
	}
	int gcd=(a*b)/lcm;
	printf("%d\n",lcm);
	printf("%d",gcd);
}
