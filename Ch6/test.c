// #include<stdio.h>
// void fub(int*,int*);
// int main(){
//     int i=5,j=2;
//     fun(&i,&j);
//     printf("%d,%d\n",i,j);
//     return 0;
// }
// void fun(int *i,int *j)
// {
//     *i=*i**i;
//     *j=*j**j;
// }


// #include<stdio.h>
// int main(){
//     float a=13.5;
//     float *b,*c;
//     b=&a;
//     c=b;
//     printf("%u,%u,%u\n",&a,b,c);
//     printf("%f,%f,%f,%f,%f\n",a,*(&a),*&a,*b,*c);
// }

// #include<stdio.h>
// int main(){
//     char ch='A';
//     int k=35;
//     float a=3.14;
//     printf("%p,%p,%p\n",&ch,&k,&a);
//     return 0;


// }


// #include<stdio.h>
// void function(int*);
// int main()
// {
//     int i=35,*z;
//     z=function(&i);
//     printf("%d\n",z)
//     return 0;
// }
// void function(int *m)
// {
//     return(*m+2);
// }


#include<stdio.h>
int function(int*);
int main()
{
    int i=35,*z;
    function(&i);
    printf("%d\n",i);
    return 0;
}
int function(int *m)
{
    *m=*m+5;
}