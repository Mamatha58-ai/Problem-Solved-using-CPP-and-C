#include<stdio.h>
int main(){
	int i,n,a,b;
	int even=0,odd=0;
	scanf("%d %d %d",&n,&a,&b);
	for(i=1;i<=n;i++){
		if(i%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
   int hour=even*a+odd*b;
   printf("%d",hour);
}
