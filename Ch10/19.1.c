//nahi hua
//program to display a file wuth line numners
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *ptr;
    char ch;
    char source[67];
    int count=1;
    printf("enter file name\n");
    scanf("%s",source);
    ptr=fopen("","r");
    if(ptr==NULL){
        puts("unable to open file");
        exit(0);
    }
    printf("%d:",count);
    ch=fgetc(ptr);
    while(ch!=EOF){
        if(ch=='\n'){
            count++;
            printf("%d",count);
        }
        else{
            printf("%c",ch);
        }
    }
    fclose(ptr);
    return 0;
}