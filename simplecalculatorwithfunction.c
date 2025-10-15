#include<stdio.h>
 void add(int a,int b){
 	printf("%d\n",a+b);
 }
 void sub(int a,int b){
 	printf("%d\n",a-b);
 }
 void multi(int a,int b){
 	printf("%d\n",a*b);
 }
 void divid (int a,int b){
 	if(b!=0){
 		printf("%d\n",a/b);
	 }
	 else{
	 	printf("divide not possible\n");
	 }
 }
int main(){
	int choice,a,b;
	scanf("%d\n",&choice);
	scanf("%d %d",&a,&b);
	switch (choice) {
		case 1:
			add(a, b);
			break;
		case 2:
		   sub(a, b);
		   break;
		case 3:
		    multi(a, b);
			break;
		case 4:
		    divid(a, b);
			 break;
		default:
		printf("invalid choice\n");	 	   	
	}
}
