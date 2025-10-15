#include<stdio.h>
int main(){
	int m;
	m= 89;
	int *p=&m;
	printf("*p:%d\n",*p);
	printf("p:%d\n",p);
	printf("m:%d\n",m);
	printf("&m:%d\n",&m);

}
