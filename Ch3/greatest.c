//wap to print greatest of four numbers
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the four number respectively\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d){
    printf("the greatest number is %d\n",a);
    }
    else if(b>a && b>c && b>d){
    printf("the greatest number is %d\n",b);
    }
    else if(c>a && c>b && c>d){
    printf("the greatest number is %d\n",c);
    }
    else {
        printf("the greatest number is %d\n",d);
    }
    return 0;
}