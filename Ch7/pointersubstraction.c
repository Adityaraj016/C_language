//substraction of one pointer from another
#include<stdio.h>
int main()
{
    int a=34;
    int *ptr=&a;
    
    int b=38;
    int *ptr2=&b;
   
    printf("value of ptr %u\n",ptr);
    printf("value of ptr2 %u\n",ptr2);
    ptr++;
    printf("value of ptr++ %u\n",ptr); 
    ptr2++;
    printf("value of ptr2 %u\n",ptr2);
    printf("diggernce between pointers is %d",ptr2-ptr);
    return 0;
}