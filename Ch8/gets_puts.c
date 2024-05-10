//scanf se ham nam enter karne me spaces add nahi kar sakte
//par gets()and puts() me space enter karke print kara sakte hai
// gets se value li jati hai puts se print karai jati hai
#include<stdio.h>
int main()
{
     char str[10];  
    printf("enter the string\n");
     gets(str) ; 
     printf("the string is\n");
     puts(str) ; //str bhi kar sakte hai
     puts("hello bhai");
    
    printf(" string=%s\n",str);  // &str[0]=str
    return 0;
}