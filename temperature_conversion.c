#include<stdio.h>
int main(){
int choice;
float temp,result;
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("fahrenheit to celsius");
		scanf("%f",&temp);
		result=(temp-32)*5/9;
			printf("%.2f",result);
		break;
    case 2:
    	printf("celsius to fahrenheit");
    	scanf("%f",&temp);
    	result= (temp*9/5)+32;
    	printf("%.2f",result);
    	break;
}
 }
