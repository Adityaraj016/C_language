#include<stdio.h>
int main()
{
    int i,marks[5];
    int *ptr;
    ptr=&marks[0];
    for(i=0;i<5;i++)
    {
        printf("enter the marks for student %d:",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(i=0;i<5;i++)
    {
        printf("the marks for student %d is %d\n",i+1,marks[i]);
    }
    return 0;

}