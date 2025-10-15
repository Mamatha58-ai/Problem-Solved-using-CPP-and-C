#include<stdio.h>
int main(){
	int i,x;
   int 	n=0;
	scanf("%d",&x);

   
	for(i=0;i<x;i++){
			char c[x];
			scanf("%s",c);
	   if(c[0]=='+'|| c[1]=='+'){
	   	n++;
	   }
	   else if(c[0]=='-' && c[1]=='-'){
	   	n--;
	   }
	
	printf("%d",x);
}}
