#include<stdio.h>
int main(){
	int n,i,sum=0;
	scanf("%d",&n);
	char c[n];
	scanf("%s",c);
	for(i=0;i<n;i++){
		if(c[i]>='0' && c[i]<='9'){
			sum=sum+(c[i]-'0');
		}
	}
	printf("%d",sum);
}
