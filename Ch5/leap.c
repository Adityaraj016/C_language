#include<stdio.h>
void leap(int x);
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    leap(year);
    return 0;

}
void leap(int x){
    if(x%4==0 || x%400==0 && x%100!=0){
        printf("%d is a leap year\n",x);
    }
    else{
        printf("%d is not a leap year\n",x);
    }

}
