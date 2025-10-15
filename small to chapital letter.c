#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c>=65&&c<=90){
		c=c|(1<<5);
		printf("%c",c);
	}
	
	else{
		c=c & ~(1<<5);
		printf("%c",c);
	}
	
	
	
	
	
}
