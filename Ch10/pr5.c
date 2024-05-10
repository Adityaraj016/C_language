#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr=fopen("intpr5.txt","r");
    fscanf(ptr,"%d",&num);
    printf("number in intpr5,txt is %d\n",num);
    fclose(ptr);
    ptr=fopen("intpr5.txt","w");
    fprintf(ptr,"%d\n",num*2);
    printf("number is overwritten in intpr5.txt");
    fclose(ptr);
    return 0;
}