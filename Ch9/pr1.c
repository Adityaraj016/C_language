//create a two dimentional vector using structures
#include<stdio.h>
#include<string.h>
struct vector{
    int x;
    int y;
};
int main()
{
    struct vector v1,v2;
    v1.x=4;
    v1.y=9;
    printf("x dim of v1 is %d and y dim of v1 is %d\n",v1.x,v1.y);

    v2.x=5;
    v2.y=6;
    printf("x dim of v2 is %d and y dim of v2 is %d\n",v2.x,v2.y);
    return 0;
}