#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int idx;
	scanf("%d",&idx);
	    int k;
	    scanf("%d",&k);
	    for(i=n;i>idx;i--){
	    	a[i]=a[i-1];
		}
	a[idx]=k;
	n++;	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
		
}
