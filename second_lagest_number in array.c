#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
  scanf("%d",&a[i]);		
	}
	int second_largest=-1 ,largest=a[0];
	for(i=0;i<n;i++){
		if(a[i]>largest){
			second_largest=largest;
			largest=a[i];
			}
			else if(a[i]>second_largest && a[i]!=largest){
				second_largest=a[i];
			}
			
	}
	if(second_largest==-1){
		printf("-1");
	}
	else
	printf("%d",second_largest);
}
