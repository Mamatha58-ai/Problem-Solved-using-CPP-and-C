#include<stdio.h>
int i=1;
void odd();
void even();
int n;

 void odd(){
 	
 	if(i<=n){
 		printf("%d ",i+1);
 		i++;
 		even();
	 }
	 return;
 }
 void even(){

 	if(i<=n){
 		printf("%d ",i-1);
 		i++;
 		odd();
	 }
	 return;
 }
 
int main(){
	scanf("%d",&n);
 odd();
}
