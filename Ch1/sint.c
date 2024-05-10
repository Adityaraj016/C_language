#include<stdio.h>
int main()
{
    int p,r,t;
    float si;
    printf("Enter the principal amount\n");
    scanf("%d",&p);
    printf("dnter the rate of interest\n");
    scanf("%d",&r);
    printf("Enter the time in years\n");
    scanf("%d",&t);

    si=(p*r*t)/100;
    printf("the Simple Interest is %f\n",si);
    return 0;
}