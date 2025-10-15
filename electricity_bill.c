#include<stdio.h>
#include<math.h>
int main(){
float units;
float bill_Amount;
scanf("%f",&units);
if(units<=100) {
bill_Amount=units*1.50;
}
else if(units<=300) {
bill_Amount=100*1.50+(units-100)*2.00;
}
else{
bill_Amount=100*1.50+200*2.00+(units-300)*3.00;
}
if(bill_Amount>500){
 bill_Amount+=bill_Amount*0.20;
}
printf("%.2f",bill_Amount);
 }
