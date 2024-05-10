//wap tochange the value of avariable to 10 times of its actual value
//write a function and pass the value by refreence
#include<stdio.h>
void change(int *);
int main()
{
    int a=10;
    printf("the actual value of a is %d\n",a);
    change(&a);
    printf("the incresed value of a is %d\n",a);
    return 0;
}
void change(int *x)
{
    *x=*x*10;
}