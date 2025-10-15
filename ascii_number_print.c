#include<stdio.h>
int main(){
  char s[100];
  scanf("%[^\n]",s);
  int sum = 0,i;
  for(i = 0 ; s[i]!='\0' ; i++){
  	sum = sum + s[i];
  }
  printf("%d",sum);
}
