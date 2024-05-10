//used to compare two strings
#include<stdio.h>

#include<string.h>
int main()
{
    char str[10]="aditya";
    char str2[]="aditya";  
    //char str[]={'a','d','i','t','y','a','\0'}; //output is same
    int val=strcmp(str,str2);
    printf("%d",val);
    return 0;
}

//code with harry notes is good