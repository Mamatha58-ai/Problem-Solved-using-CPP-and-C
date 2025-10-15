#include<stdio.h>
void calculateAreaAndPerimeter(int l,int b){
	int a=l*b;
	int p= 2*(l+b);
	printf("%d\n",a);
	printf("%d\n",p);
}
int main(){
	int l,b;
	scanf("%d %d",&l,&b);
	calculateAreaAndPerimeter(l,b);
}
