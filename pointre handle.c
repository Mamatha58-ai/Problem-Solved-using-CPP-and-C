#include<stdio.h>
int main(){
	int *ab;
	int m=29;
	printf("&m:%p\n",&m);
	printf("m:%d\n",m);
	ab=&m;
	printf("&ab:%p\n",ab);
	printf("ab:%d\n",*ab);
	m=50;
	printf("&ab:%p\n",ab);
	printf("ab:%d\n",*ab);
	*ab=7;
	printf("&m:%p\n",&m);
	printf("m:%d\n",m);
}
