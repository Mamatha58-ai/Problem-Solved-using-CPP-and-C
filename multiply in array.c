#include<stdio.h>
int main(){
	int n,m,n1,m1,i,j,k,sum=0;
	scanf("%d %d %d %d",&n,&m,&n1,&m1);
	int A[n][m];
	int B[n1][m1];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
}	}
	for(i=0;i<n1;i++){
		for(j=0;j<m1;j++){
			scanf("%d",&B[i][j]);
		}
}
   if(m!=n1){
   	printf("not possible");
   	return 0;
   }
   int C[n][m1];
   for(i=0;i<n;i++){
   	for(j=0;j<m1;j++){
   		 sum=0;
   		for(k=0;k<n1;k++){
   			sum=sum+A[i][k]*B[k][j];
		   }
		   C[i][j]=sum;
		   printf("%d ",C[i][j]);
	   }
	   printf("\n");
}

}
