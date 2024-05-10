//wap to copy one array into another in reverse order
#include<stdio.h>
int main()
{
    int arr1[5];
    int arr2[5];
    int i,j;
    printf("enter the elemnts of 1 st array\n ");
    for( i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0, j=4;i<5;i++,j--)
    {
        arr2[j]=arr1[i];
    }
    printf("array elemnts in reverse order is\n");
    for(j=0;j<5;j++)
    {
        printf(" %d\t",arr2[j]);
    }
    return 0;
}