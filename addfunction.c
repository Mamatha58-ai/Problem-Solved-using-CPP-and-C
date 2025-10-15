#include<stdio.h>
  int add(int c,int d){
  	int sum=c+d;
  	//printf("%d",sum);
  	return sum;
  }
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
 int sum=add(a,b);
 printf("%d",sum);
}
