#include<stdio.h>
 UpDate(int n){
	n=n*10;
	return n;	
}
int main(){
	int n;
	scanf("%d",&n);
	UpDate(n);
	printf("%d",n);
}
