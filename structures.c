#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[100];
	float perc;
}s1,s2;
int main(){
	struct student s1,s2;
	s1.rollno =  229;
	strcpy(s1.name ,"mamatha");
	s1.perc =9.5;
	s2.rollno=485;
	strcpy(s2.name,"brunda");
	s2.perc=9.76;
	printf("%d\n %s\n %f\n %d\n %s\n %f",s1.rollno,s1.name,s1.perc,s2.rollno,s2.name,s2.perc);
}
