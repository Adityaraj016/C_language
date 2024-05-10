//print values and adrees 
#include<stdio.h>
int main()
{
    float a=3.14;
    float *b,**c;
    b=&a;
    c=&b;
    printf("%u,%u,%u\n",&a,&b,&c);
    printf("%u,%u\n",b,c);
    printf("%f,%f,%f\n",a,*b,**c);
    return 0;
}
