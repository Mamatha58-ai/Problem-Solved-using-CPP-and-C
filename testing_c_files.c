#include<stdio.h>
int main(){
	char s[2];
	scanf("%c",s);
	int x=s[0]-'a';
	int y=s[1]-'1';
	if((x+y)%2==0){
		printf("white");
	}
	else{
		printf("Black");
	}
}
