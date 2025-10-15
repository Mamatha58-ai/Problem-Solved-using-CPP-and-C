#include<stdio.h>
void quicksort(int arr[],int first,int last);

int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1); // for over all array
	//for sortedarry
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void quicksort(int arr[],int first,int last){
	int i,j,temp;
	if(first<last){
	 int pivot=first;// pivot as first element
	 i=first;
	 j=last	;
	while(i<j)	{
		while(arr[i]<=arr[pivot] && i<last){
			i++;
		}
		while(arr[j]>arr[pivot]){
			j--;
		}
		if(i<j){
		//	swap(arr[i],arr[j]);
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}  	
	}
	//swap(arr[pivot],arr[j]);	
	temp=arr[j];
			arr[j]=arr[pivot];
			arr[pivot]=temp	;
	quicksort(arr,first,j-1);   // for left part
	quicksort(arr,j+1,last);  // for right part
		
	}
}
