#include<stdio.h>
int main(){
	int a,b,c,d,e,total=0;
	float avg;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	avg=total/5;
	printf("%.2f",avg);
}
