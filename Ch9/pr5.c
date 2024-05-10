//wap witth structures representing a complex number
#include<stdio.h>
#include<string.h>
struct complex{
    float real;
    float imag;
};
int main()
{
    struct complex c1,c2;
    c1.real=4;
    c1.imag=9;
    printf("x dim of c1 is %f and y dim of c1 is %f\n",c1.real,c1.imag);

    c2.real=5;
    c2.imag=6;
    printf("x dim of c2 is %f and y dim of c2 is %f\n",c2.real,c2.imag);
    return 0;
}