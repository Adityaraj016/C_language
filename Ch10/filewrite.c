#include<stdio.h>
int main()
{
    FILE *ptr;
    int num=45;
    ptr=fopen("generated.txt","w");
    fprintf(ptr,"the number is is %d\n",num);
    fclose(ptr);
    return 0;
}