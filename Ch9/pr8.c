#include<stdio.h>
#include<string.h>
struct bank{
    char name[25];
    int account;
    float money;
    int year;
    char address[25];
};
int main()
{
    int n;
    printf("enter the numbers of customers\n");
    scanf("%d",&n);
    struct bank customer[n];
    
    for(int i=0;i<n;i++){
        printf("enter the name of customer%d\n",i+1);
    scanf("%s",customer[i].name);
    printf("enter the account(10 digit) no for customer%d\n",i+1);
    scanf("%d",&customer[i].account);
    printf("enter the money in account of customer%d\n",i+1);
    scanf("%f",&customer[i].money);
    printf("enter the year no in which accoubt was opened for customer%d\n",i+1);
    scanf("%d",&customer[i].year);
    printf("enter the address of customer%d\n",i+1);
    scanf("%s",customer[i].address);
    }
    for(int i=0;i<n;i++){
        printf("****the details of customer%d are\n",i+1);
        printf("NAME=%s\naccount=%d\nmoney=%f\nyear=%d\naddress=%s\n"
        ,customer[i].name,customer[i].account,customer[i].money,customer[i].year,customer[i].address);
    }

    return 0;
}