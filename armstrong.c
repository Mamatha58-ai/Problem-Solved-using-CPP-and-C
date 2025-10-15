#include<stdio.h>
int arm(int);
int main(){
	int  n;
	scanf("%d",&n);
int res=arm(n);
printf("%d ",res);
if(n==res){
		printf ("armstrong\n");
		
	}
	else{
		printf("not armstrong\n");
	}
return 0;
}
int arm(int n){
	int sum=0 ,rem;
	int dig=(int)log10(n)+1;
	while (n>0){
		rem = n % 10;
		sum = sum+pow(rem,dig);
		n=n/10;
	}
	return sum;
}
