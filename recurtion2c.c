#include<stdio.h>
long long fun(long long n){
	if(n==1 || n==0) return 1;
	else return n*fun(n-1);
}
int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld",fun(n));
	return 0;
}
