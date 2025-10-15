#include<stdio.h>
#include<stdlib.h>
 int *plusone(int *digits,int digitsize,int *returnsize){
 	int i;
 	for(i=digitsize-1;i>=0;i--){
 		if(digits[i]<9){
 			digits[i]++;
 			*returnsize=digitsize;
 			return digits;
		 } else {
		 	digits[i]=0;
		 }
	 }
	 int *newdigits= (int *)malloc((digitsize+1)*sizeof(int));
	 newdigits[0]=1;
	 	for(i=0;i<digitsize;i++){
		newdigits[i+1] = digits[i];
	}
	*returnsize =digitsize+1;
	return newdigits;
 }
int main(){
	int digits[100];
	int digitsize;
	scanf("%d",&digitsize);
	int returnsize,i;
	for(i=0;i<digitsize;i++){
		scanf("%d",&digits[i]);
	}
	int *result=plusone(digits,digitsize,&returnsize);
	for(i=0;i<returnsize;i++){
		printf("%d",result[i]);
	}
}
