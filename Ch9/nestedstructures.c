#include<stdio.h>
#include<string.h>
struct addresss{
    char phone[15];
    char city[25];
    int pin[10];

};
struct employees{
    char name[25];
    int code;
    float salary;
    struct addresss a;
};
int main(){
struct employees e1;
printf("name of employee\n");
scanf("%s",e1.name);
printf("code of employee\n");
scanf("%d",&e1.code);
printf("salary of employee\n");
scanf("%f",&e1.salary);

printf("enter elemnts of address\n");
printf("phone of employee\n");
scanf("%s",e1.a.phone);
printf("city of employee\n");
scanf("%s",e1.a.city);
printf("pin of employee\n");
scanf("%d",&e1.a.pin);

printf("you entered\n");
printf("name=%s\ncode=%d\nsalary=%f\nphone=%s\ncity=%s\npin=%d\n",e1.name,e1.code,e1.salary,e1.a.phone,
e1.a.city,e1.a.pin);
return 0;
}