//to calculate area,perimeter by utility of call by reference
#include<stdio.h>
void areaperi(int,float* ,float*);
int main()
{
    int radius;
    float area,perimeter;
    printf("enter the value of radius\n");
    scanf("%d",&radius);
    areaperi(radius,&area,&perimeter);
    printf("the area=%f and perimeter is %f\n",area,perimeter);
    return 0;
}
void areaperi(int r,float *a,float *p)
{
    *a=3.14*r*r;
    *p=2*3.14*r;
}