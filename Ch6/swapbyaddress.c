//call by address to swap two numbers
#include<stdio.h>
void swap(int* ,int*);
int main()
{
    int a=10,b=20;
    printf("the value of a before swap is %d and b is %d\n",a,b);

    swap(&a,&b);
    printf("the value of a is %d and b is %d\n",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    

}