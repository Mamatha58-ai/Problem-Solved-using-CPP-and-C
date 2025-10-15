#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
// int *findmid(int a[],int n){
// 	return &a[n/2];
// }


//int *fun(){
//  int *num = (int*) malloc (sizeof(int));
//	*num= 10;
//	return num;
//}


 int * fun(){
 	int i;
 	int *ptr= (int *) malloc(4*sizeof(int));
 	for(i=0;i<4;i++){
	scanf("%d",ptr+i);
}
return ptr;
 }
int main(){

	
//	int x=9;
//	int *ptr=&x;
//	*ptr=5;
//	printf("%d",*ptr);
// //int x=2;
// int *p,*q;
//  p=&x;
//  q=p;
//  *p=19;
//  printf("%d %d",*p,*q);
 //int a[]={1,5,8,9,0};
// int b[]={1,2,3,8};
 //int *p=&a[0];
 //printf("%d",*(p+3));
// int n=sizeof(a)/sizeof(a[0]);
// int *mid= findmid(a,n);
// printf("%d",*mid);
  //What will be output of the following program?


//int arr[]={1,2,3,4,5,6};
//int i,j,k;
//j=++arr[2];
//k=arr[1]++;
//i=arr[j++];
//printf("i=%d, j=%d, k=%d", i, j, k);
//return 0;

// int i;
// for(i=0;i<=3;i++) 
// printf("%d",i);
// return 0;


//printf("HELllsOW"+0);

//if(printf("mamtha\n"))
//
//{ 
//}
//int x=printf("Mamatha ");
//printf("%d",x);


 // void pointer
//int n=5;
//void *ptr=&n;
//printf("%d",*(int*)ptr); // it uses to store the return void type of malloc and realloc


//null pointer
//int *ptr=NULL;
//printf("%d",ptr);
//printf("%d",sizeof(NULL));


//int *ptr=NULL;
//ptr=(int*)malloc(2*sizeof(int));
//if(ptr==NULL) printf("memory not allocated");
//else printf("memory allocated");


//int *ptr=NULL;
//ptr=fun();
//printf("%d",*ptr);



//   dynamic memory allocation
//int n=2,i;
////scanf("%d",&n);
//int *ptr= (int *) malloc(2*sizeof(int));
// //int *ptr =(int *) calloc(n,sizeof(int));
//for(i=0;i<2;i++){
//	scanf("%d",ptr+i);
//}
//ptr= (int *)realloc(ptr,4*sizeof(int));
//for(i=2;i<4;i++){
//	scanf("%d",ptr+i);
//}
//for(i=0;i<4;i++){
//	printf("%d",*(ptr+i));
//}
//free(ptr);
//ptr=NULL;


int n=4,i,sum=0;
 int *ptr = fun();
 for(i=0;i<4;i++){
 sum += *(ptr+i);
}
printf("%d",sum);
return 0;
}
