#include<stdio.h>
int main(){
    char s[10];
    scanf("%[^\n]s",s);
    int len=0;
    int i=0;
//    for( i=0;s[i]!='\0';i++){
//        len++;
//    }
//    printf("%d",len);
    while(s[i]!='\0'){
	len +=1;
	i +=1;
}
printf("%d",len);
}

