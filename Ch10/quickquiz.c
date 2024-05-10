//modify the ques 1 to check whwther the file exists or not before opening it
#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    char c[25];
    ptr=fopen("aditya.txt","r");
    //ptr=fopen("aditya2.txt","r");
    if(ptr==NULL){
        printf("file does not exist\n");
    }
    else{
    fscanf(ptr,"%s",c);
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    printf("the num 1 is %d\n",num);
    printf("the word 1 is %s\n",c);
    }
    return 0;
}