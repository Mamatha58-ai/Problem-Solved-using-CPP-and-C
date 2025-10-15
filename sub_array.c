#include<stdio.h>

int main(){
	int a[5] = { 1 , 2 , 3, 4, 5};
	int len = sizeof(a)/sizeof(int);
	int i,j,k ; 
//	int k;
//	scanf("%d",&k);
	
//	int temp = a[0];
//	for(i=0 ; i<len ;i++){
//		a[i] = a[i+1];
//	}
//	a[len - 1] = temp;
//	for(i=0 ; i<len ;i++){
//		printf("%d",a[i]);
for (i = 0 ; i < len; i++) {
    for ( j = i; j < len; j++) {
        // Print subarray from i to j
        printf("(");
        for ( k = i; k <= j; k++) {
            printf("%d", a[k]);
            if(j!=k) printf(",");
        }
        printf(")");
        printf("\n");
    }
}

}
