//to find the power of a one number raised to other
#include<stdio.h>
float pow(float x,int y);
int main()
{
    float a,value;
    int b;
    printf("enter the two numbers respectively\n");
    scanf("%f%d",&a,&b);
    value=pow(a,b);
    printf("the value of %f raised to power %d is %f \n",a,b,value);
    return 0;

}
float pow(float x,int y)
{
    int i;
    float power=1;
    for(i=1;i<=y;i++){
        power=power*x;
    }
    return(power);
}


