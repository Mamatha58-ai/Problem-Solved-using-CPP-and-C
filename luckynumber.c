#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n>0){
	if(n%10==7){
		printf("yes");
		return 0;
	}	
	n=n/10;
	}
	printf("no");
		
}
