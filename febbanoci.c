#include<stdio.h>
int main(){
	int i,n,c;
    int  a=0,b=1;
	scanf("%d",&n);
	printf("%d %d",a,b);
	while(i<=n){
		c=a+b;
		a=b;
		b=c;
	printf(" %d ",c);	
	i++;
	}
}
