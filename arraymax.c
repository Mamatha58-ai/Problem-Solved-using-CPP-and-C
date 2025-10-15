#include<stdio.h>
#define INT_MIN   64875046487504
int main(){
	int n,i;
	scanf("%d",&n);
	int A[n] ;
	for( i=0;i< n ;i++){
		scanf("%d",&A[i]);
	}
	for( i=0 ; i<n ;i++){
		printf("%d\n",A[i]);
	}
	int max=INT_MIN;
	//int max=0;
	//printf("%d",&max);
	for( i=0;i<n;i++){
		if(max<A[i]){
			max=A[i];
		}
	}
	printf("%d\n",max);
		}
