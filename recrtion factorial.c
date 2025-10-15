#include<stdio.h>
int  fact(int i){
   if(i==1)	return 1;
   return i*fact(i-1);
}
int main(){
int ans=fact(5);
printf("%d",ans);
}
