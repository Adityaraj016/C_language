#include<stdio.h>
int main()
{
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    int vippass;
    printf("enter vippass code\n");
    scanf("%d",&vippass);
    if((age>=18 && age<=70)|| (vippass==16)){
        printf("you can drive\n");
    }
    else{
    printf("you cannot drive\n");
    }
    return 0;
}