#include<stdio.h>
int main(){
	int n,i,avg,sum=0,cnt=0;
	scanf("%d",&n);
	int A[i];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+A[i];
		avg=sum/n;
	}
	for(i=0;i<n;i++){
		if(avg==A[i]){
			cnt++;
		}
	}
	if(cnt>=1){
		printf("true");
	}
	else{
		printf("false");
	}
	
}
