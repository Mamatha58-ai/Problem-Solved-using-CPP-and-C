#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for( i=0;i<n;i++){
		int idx=i;
		for(j=i+1;j<n;j++){
			if(a[idx]>a[j]){
				idx=j;
			}
		}
		int temp=a[idx];
		    a[idx]=a[i];
		    a[i]=temp;
		    printf("%d ",a[i]);
	}
}
