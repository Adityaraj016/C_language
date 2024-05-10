//program to find the value of one number raised to the power of another
#include<stdio.h>
int main()
{
    float x,pow;
    int y,i;
    printf("enter the two numbers x and y\n");
    scanf("%f%d",&x,&y);
    pow=1;
    i=1;
    while(i<=y){
        pow=pow*x;
        i++;
    }
    printf(" value of x to thr power y is%f",pow);
    return 0;
}