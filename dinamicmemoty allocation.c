#include<stdio.h>
//#include<string.h>
#include<stdlib.h>
int main(){
	int n,i,m;
	scanf("%d",&n);
	int *arr;
	arr = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	free(arr);// below the code is not print .
	n=m;
	scanf("%d",&m);
	arr = (int *)realloc(arr,n*sizeof(int));
	for(i=0;i<m;i++){
		printf("%d ",arr[i]);
	}
	//free(arr);
}
