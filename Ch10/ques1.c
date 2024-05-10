#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    char c[25];
    ptr=fopen("aditya.txt","r");
    fscanf(ptr,"%s",c);
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    printf("the num 1 is %d\n",num);
    printf("the word 1 is %s\n",c);

    return 0;
}