#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for( i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int cnt=1;
	for( i=0 ;i<n;i++){
		if(a[i]%2!=0 && i%2==0){
			cnt=0;
			break;
		}
	}
		if(cnt){
			printf("yes");
		}
		else{
			printf("no");
		}
	
		}
	


