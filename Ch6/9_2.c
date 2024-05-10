//wap that defines a function the calculates power of one
//number raised to another and factorial value of a number in one call
#include<stdio.h>
void pow_fact(float ,int ,int ,float*,int *);
int main()
{
    float a,pow;
    int b,factorial;
    printf("enter the two numbers you want power\n");
    scanf("%f%d",&a,&b);
    int c;
    printf("enter the  number you want factorial\n");
    scanf("%d",&c);
    pow_fact(a,b,c,&pow,&factorial);
    printf("the value of power=%f\n and factorial is %d\n",pow,factorial);
    return 0;
    
}
void pow_fact(float x,int y,int z,float *power,int *fact)
{
    float reserve=1;
    int i;
    for(i=1;i<=y;i++){
        reserve=reserve*x;
        *power=reserve;
    }
    reserve=1;
    
    for(i=1;i<=z;i++){
        reserve=reserve*i;
        *fact=reserve;
        
    }
}
