//simple program to find the value of one number raised to the power of another
#include<stdio.h>
#include<math.h>
int main()
{
    float x,value;
    int y;
    printf("enter the two numbers x and y\n");
    scanf("%f%d",&x,&y);
    value=pow(x,y);
    printf(" value of x to thr power y is%f",value);

    
 
   
    return 0;
}