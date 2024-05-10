#include<stdio.h>
int main()
{
    int arr[10]={2,3,4,5,6,2,4,2,4,2,};
    int *ptr;
    ptr=&arr[0];
    printf("%d",(ptr+2));
    return 0;
}