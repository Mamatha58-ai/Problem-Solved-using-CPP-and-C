#include<stdio.h>
void is_prime(int x){
	int fact = 0 ;
	int i;
	for( i=1; i<=x ; i++){
		if(x%i==0){
			fact++;
		}
	}
	if(fact==2){
		printf("%d ",x);
	}
}
int main(){
  int n;
  scanf("%d",&n);
  int i, prime = 0;
  for( i=1 ; i<=n ; i++){
   is_prime(i);
  }	
}

