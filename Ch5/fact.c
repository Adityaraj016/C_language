//to find factorial of a given number using functions
#include<stdio.h>
int fact(int x);
int main()
{
    int number;
    int factorial;
    printf("enter the number\n");
    scanf("%d",&number);
    factorial=fact(number);
    printf("the factorial of %d is %d\n",number,factorial);
    return 0;

}
int fact(int x){
    int factorial=1;
    int i;
    for(i=1;i<=x;i++){
        factorial=factorial*i;
    }
    return(factorial);

}