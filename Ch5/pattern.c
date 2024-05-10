//wap to print following pattern
//*
//***
///***
#include<stdio.h>
void pattern(int);
int main()
{
    int n;
    printf("enter number of lines\n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
void pattern(int x){
    if(x==1){
        printf("*\n");
        return;
    }
    pattern(x-1);
    for(int i=0;i<(3*x-3);i++){
        printf("*");
    }
    printf("\n");

}