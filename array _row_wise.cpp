#include<stdio.h>
int main(){
	int arr[5][5],i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for(i=0,j=0;i<5,j<5;i++,j++){
	sum=sum+arr[i][j];	
	}
}
