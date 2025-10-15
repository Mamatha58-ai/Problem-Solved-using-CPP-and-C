#include<stdio.h>
int main(){
	int n,i,cnt=0;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int x;
	scanf("%d",&x);
	for(i=0;i<n;i++){
	 if(x==A[i]){
	 	cnt++;
	 }
}
	 printf("%d",cnt);

}
