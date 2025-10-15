#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main(void) {
    //how to read as an input
    //string functions
    //1.strlen --> length of the string
//    char C[] ="mamatha";
//    size_t n = strlen(C);
//       printf("%d\n",n);
//    //strcpy
//     char scr[6] = "hello";
//	   char dest[10];
//	   strcpy(dest,scr);
//	    //strncpy
//       strncpy(dest,scr,2);
//      printf("%s",dest);
//    
//    //strcat
    char scr1[6] = "hello";
    char scr2[6] = "hello";
  strcat(scr1,scr2);
  printf("%s\n",scr1);
//    
//    //strncat
    strncat(scr1,scr2,3);
    printf("%s\n",scr1);
    
    //strcmp
//    int res = strcmp(scr1,scr2);
//    if(res==0) {
//    	printf("equal");
//	}
//    
//    else{
//    	printf("not equal");
//	}   
    //if res == 0 then they are equal other wise not equal
//    //strncmp
//    char A[10] ="abc";
//    char B[10] = "abcded";
//    int res1 = strncmp(A,B,3);
//    if(res1==0)
//    printf("equal");
//    else
//    printf("not equal");
//    
//    //strstr
//    char s[20] = "hello world";
//    char* pos = strstr(s,"ello");
//    printf("%c",*pos);
//    
    
    
    
    
    
}
