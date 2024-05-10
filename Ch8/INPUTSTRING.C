//easier way to input and print strings
#include<stdio.h>
int main()
{
     char str[10];  
    printf("enter the string\n");
    scanf("%s",&str[0]);  //str bhi kar sakte hai
    printf(" string=%s\n",str);  // &str[0]=str
    return 0;
}

/*dekho char ptr[] se string input lenge na 
jaise char ptr[]="aditya raj";
aur phir
 ptr="rahul; karenge
to ye error throw karega


aur wahi char *ptr="aditya raj"
phir
ptr="rahul"
karenge to e iss metod se string ka new value rahul hi hoga
output aayega koi error nahi hai*/