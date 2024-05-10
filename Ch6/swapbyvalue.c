//call by value to swap two numbers
#include<stdio.h>
void swap(int ,int);
int main()
{
    int a=10,b=20;
    swap(a,b);
    printf("the value of a is %d and b is %d\n",a,b);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
     printf("the value of a is %d and b is %d\n",x,y);

}