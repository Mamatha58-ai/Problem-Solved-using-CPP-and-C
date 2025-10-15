#include<stdio.h>
int main(){
	int n,i,x,y;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	scanf("%d %d",&x,&y);
	int c=0;
	for(i=0;i<n;i++){
		if(A[i]<x || A[i]>y){
				printf("%d ",A[i]);
			c++;
		}
	}
		if(c==0){
			printf("-1");
		}
		}
