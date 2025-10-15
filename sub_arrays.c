#include<stdio.h>
int main(){
	int a[5] = {1,2,3,4,5};
	int len = sizeof(a)/sizeof(int);
int  max_sum = 0 , i ,j , k, sub_sum = 0;
	for( i = 0 ;i < len ; i++){
		for(j = i ; j < len ; j++){
			sub_sum = 0 ;
			for(k = i ; k <= j ; k++){
				sub_sum  += a[k]; 
			}
			if(max_sum < sub_sum){
				max_sum = sub_sum;
			}
		}
	}
	printf("%d",max_sum);
}
