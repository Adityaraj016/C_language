//find lenght of a string

// #include<stdio.h>
// #include<string.h>
//         int main()
//         {
//             //char str[]="aditya";  
            
//             char str[]={'a','d','i','t','y','a','\0'}; //output is same
//             int a=strlen(str);
//             printf("%s\n",str);
//             printf("the lenght of string is %d\n",a);
//             return 0;
//         }


//finfd lenhet of string using function
#include<stdio.h>
void stringlen(char []);
        int main()
{
//char str[]="aditya raj";  

//char str[]={'a','d','i','t','y','a','\0'}; //output is same
char str[25];
printf("enter the string\n");
gets(str);

printf("%s\n",str);
stringlen(str);

return 0;}
void stringlen(char str[])
{

    int count =0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("string length =%d",count);
}