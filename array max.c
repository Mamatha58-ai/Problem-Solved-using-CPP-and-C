#include<stdio.h>
int main(){
	int n,i,max;
	scanf("%d",&n);
	int array[n];
	for(i=0 ;i<n ;i++){
		scanf("%d",&array[i]);
	}
	max=array[i];
	for(i=1;i<n;i++){
	
	if(array[i]>max){
		max=array[i];
		}
	}
		printf("%d",max);
	

}
	
