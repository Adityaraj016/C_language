#include<stdio.h>
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);

    if(year%400==0 || year%4==0 && year%100!=0){
        printf("it is leap year\b");
    }
    else{
        printf("it is not leap year\n");
    }
    
    
    
    return 0;
}