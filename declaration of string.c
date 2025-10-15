#include<stdio.h>
int main(){
	//char A,a;
	//how  to declare strings
	// 1 -> char A[10] ={ 'a','b','c','d' };
	// 2 -> char A[] ={'a','b','c','d'};
	// 3 -> char A[10]="mamatha";
   //  	4 -> char *A="mamatha";
	//char A[10]="mamatha";
//	printf("%s",A);
 //another metod
  char A[10];
   scanf("%[^\n]s",A);
  //fgets(A,10,stdin);
   printf("%s",A);
     
	}
