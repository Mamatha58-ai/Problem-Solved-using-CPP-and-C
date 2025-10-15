#include<stdio.h>
int main(){
	int k;
	char ch;
	scanf("%d %c",&k,&ch);
	ch= 'ch'+k;
	printf("%c",ch);
}
