//write a function sumvector which returns the sum of two vwctors passed to it
//the vectors munt be two dimentional;
#include<stdio.h>
#include<string.h>

struct vector{
    int x;
    int y;
};
struct vector sumvector();
int main()
{
    struct vector v1,v2,sum;
    v1.x=4;
    v1.y=9;
    printf("x dim of v1 is %d and y dim of v1 is %d\n",v1.x,v1.y);

    v2.x=5;
    v2.y=6;
    printf("x dim of v2 is %d and y dim of v2 is %d\n",v2.x,v2.y);

    sum=sumvector(v1,v2);

    printf("x dim of vector is %d and y dim of vector is %d\n",sum.x,sum.y);

    
    return 0;
}
struct vector sumvector(struct vector m1,struct vector m2){
    struct vector result;
    result.x=m1.x+m2.x;
    result.y=m1.y+m2.y;
    return result;
}


// #include<stdio.h>
// #include<string.h>

// struct vector{
//     int x;
//     int y;
// };
// void sumvector();
// int main()
// {
//     struct vector v1,v2,sum;
//     v1.x=4;
//     v1.y=9;
//     printf("x dim of v1 is %d and y dim of v1 is %d\n",v1.x,v1.y);

//     v2.x=5;
//     v2.y=6;
//     printf("x dim of v2 is %d and y dim of v2 is %d\n",v2.x,v2.y);

//     sumvector(v1,v2);

    

    
//     return 0;
// }
// void sumvector(struct vector m1,struct vector m2){
//     struct vector result;
//     //struct vector result;
//     result.x=m1.x+m2.x;
//      result.y=m1.y+m2.y;
//      printf("%d %d",result.x,result.y);
// }

