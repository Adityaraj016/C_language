//wap to calculate the sum of the numbers occuring in the multiplication table of a given number
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    i=1;
    while(i<=10){
        sum=sum+n*i;
        i++;
    }
    printf("the sum of multiplication table=%d\n",sum);
    
    return 0;
}