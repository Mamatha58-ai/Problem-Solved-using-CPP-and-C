#include<stdio.h>
int main(){
    int f,l,sum=0,rem,i;
    scanf("%d %d",&f,&l);
    for( i=f;i<=l;i++){
        int temp=i;
        while(i>0){
        rem=i%10;
        sum=sum*10+rem;
        i=i/10;
        }
        if(sum==temp){
            printf("%d",i);
        }
    }
}
