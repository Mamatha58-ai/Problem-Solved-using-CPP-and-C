#include<stdio.h>
int main(){
	int i=0,j=5-1;
	int A[5] = {1,2,3,8,5};
	while(i<j){
		int temp=A[i];
		A[i]=A[j];
		A[j]=temp;
		i++;
		j--;
	}
	for(i=0;i<=4;i++){
		printf("%d",A[i]);
	}
	}
