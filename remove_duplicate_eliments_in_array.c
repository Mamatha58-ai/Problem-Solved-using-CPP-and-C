#include<stdio.h>
void removeduplicate(int arr[],int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<n-1;k++){
					arr[k]=arr[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	//printf("\n");
}
int main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
 removeduplicate(arr,n);
}
