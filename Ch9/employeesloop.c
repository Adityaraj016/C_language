//employees details using for loop in structures
#include<stdio.h>
#include<string.h>
struct employees{
    char name[25];
    int code;
    float salary;
};
int main()
{
    int n;
    printf("enter the numbers of employees\n");
    scanf("%d",&n);
    struct employees emp[n];
    
    for(int i=0;i<n;i++){
        printf("enter the name of e%d\n",i+1);
    scanf("%s",emp[i].name);
    printf("enter the code for e%d\n",i+1);
    scanf("%d",&emp[i].code);
    printf("enter the salary of e%d\n",i+1);
    scanf("%f",&emp[i].salary);
    }
    for(int i=0;i<n;i++){
        printf("**employee %d details\n",i+1);
    printf("name=%s\ncode=%d\nsalary=%f\n",emp[i].name,emp[i].code,emp[i].salary);
    }

    return 0;
}