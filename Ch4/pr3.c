//program to find the factorial of the input value
#include<stdio.h>
int main()
{
    int x,i,fact;
    printf("enter the number\n");
    scanf("%d",&x);
    fact=1;
    i=1;
    while(i<=x){
        fact=fact*i;
        i++;
    }
    printf(" value of factorial of x %d",fact);
    return 0;
}