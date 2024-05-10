//wap to take string as an input fram the user using %c and %s and 
//xonfirm the the both strings are eqaul
#include<stdio.h>
#include<string.h>
int main()
{
     char str[10];  
    printf("enter the string\n");
    scanf("%s",str);  //str bhi kar sakte hai
    printf(" string=%s\n",str);  // &str[0]=str
    char str2[10];
    char c;
    printf("enter the second string\n");
    int i=0;
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i-1]='\0';
    printf("string 2=%s\n",str2);
    printf("strcmp return for both string %d\n",strcmp(str,str2));
    
    
    return 0;
}