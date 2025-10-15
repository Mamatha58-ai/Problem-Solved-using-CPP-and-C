
#include<stdio.h>
#define N 10

int main(int num)
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);

		 int max = (a>b && a>c && b>c) ? a : (b>c && b>d) ? b :(c>d )? c:d ;
	printf("%d",max);
}

