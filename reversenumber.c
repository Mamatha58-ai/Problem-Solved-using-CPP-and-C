#include<stdio.h>
int palindron(int);
int main(){
	int  n;
	scanf("%d",&n);
int rev=palindron(n);
printf("%d",rev);
if(n==rev){
		printf ("palindrome\n");
		
	}
	else{
		printf("not palindrome\n");
	}
return 0;
}
int palindron(int n){
	int sum=0 ,rem;
	while (n>0){
		rem = n % 10;
		sum = sum*10+rem;
		n=n/10;
	}
	return sum;
}
