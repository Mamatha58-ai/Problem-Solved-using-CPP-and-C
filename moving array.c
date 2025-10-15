#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int A[n];
	for (i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int k;
	scanf("%d",&k);
	k=k%n;
	for(i=0;i<k;i++){
		int temp = A[n-1];
		for( j=n-2;j>=0;j--){
		A[j+1] = A[j];
		}
		A[0]=temp;
	}
	for (i=0;i<n;i++){
		printf("%d",A[i]);
	}
	
}
