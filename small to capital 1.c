#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c>=65 && c<=90 ){
	
	c = c | (' ');
	printf("%c\n",c);
}
	
	else {
	
	
	c=c& ~(' ');
	printf("%C",c);
}
}
