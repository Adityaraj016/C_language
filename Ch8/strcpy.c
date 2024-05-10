//to copy one string to anothe
// #include<stdio.h>

// #include<string.h>
// int main()
// {
//     char str[10]="aditya";
//     char str2[10];  
//     //char str[]={'a','d','i','t','y','a','\0'}; //output is same
//     strcpy(str2,str);
//     printf("%s",str2);
//     return 0;
// }



/*copy one string to anothe using functions*/
#include<stdio.h>

void xstrcpy(char [],char []);
int main()
{
    char source[25]="aditya raj";
    char target[25];  
    //char str[]={'a','d','i','t','y','a','\0'}; //output is same
    printf(" the string before copying is %s\n",source);
    xstrcpy(target,source);
    
    return 0;
}
void xstrcpy(char target[],char source[]){
    int i=0;
    for(i=0;source[i]!='\0';i++){
        target[i]=source[i];
    }
    target[i]='\0';
    printf(" the string after copying is %s\n",target);
    //return target;
    
}