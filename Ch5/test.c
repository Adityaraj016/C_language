#include<stdio.h>
void fun(int b);
int main()
{
    int a=30,g;
    fun(g);
    printf("%d\n",a);
    return 0;
}
void fun(int b){
    b=60;
    printf("%d\n",b);
}
