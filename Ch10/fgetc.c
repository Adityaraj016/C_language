#include<stdio.h>

int main()
{
    FILE *ptr;
    char c;
    ptr=fopen("quickquiz.c","r");
    c=fgetc(ptr);
    while(c!=EOF){   //EOF->end of file
    printf("%c",c);
    c=fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}