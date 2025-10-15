#include<stdio.h>
int climbStairs(int n) {
    if (n==1 || n==0) {
        return 1;
    }
    else 
     return climbStairs(n-1)+climbStairs(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
int result=climbStairs(n);
printf("%d",result);
}
