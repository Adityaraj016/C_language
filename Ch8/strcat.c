//to cancadinate two strings
#include<stdio.h>

#include<string.h>
int main()
{
    char str[20]="aditya      ";
    char str2[]="    rajput ";  
    //char str[]={'a','d','i','t','y','a','\0'}; //output is same
    strcat(str2,str);
    printf("%s\n",str2);
   //printf("%s%s",str,str2);
    return 0;
}