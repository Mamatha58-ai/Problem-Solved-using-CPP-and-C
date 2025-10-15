#include<stdio.h>
int main(){
	int n,i,k,j;
	scanf("%d",&n);
	for( i=1;i<=n;i++){
		for(j=1;j<=2*i;j++){
			printf("*");
		}
//		for(k=1;k<=n-i;k++){
//			printf("* ");
//		}
		
		printf("\n");
	}
}
