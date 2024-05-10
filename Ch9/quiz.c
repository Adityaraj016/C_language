//use structure ti input details of three employees 


// fflush(stdin) laga dene se charecter store karne me errir nahi aata
//gar ek se jayda baar array ya structure me charecter lena ho to lga denge
// #include<stdio.h>
// #include<string.h>
// struct employees{
//     char name[25];
//     int code;
//     float salary;
// };
// int main()
// {
//     struct employees e1,e2,e3;
//     printf("enter the name of e1\n");
//     gets(e1.name);
//     printf("enter the code for e1\n");
//     scanf("%d",&e1.code);
//     printf("enter the salary of e1\n");
//     scanf("%f",&e1.salary);

//     fflush(stdin);
     
//     printf("enter the name of e2\n");
//     gets(e2.name);
//     printf("enter the code for e2\n");
//     scanf("%d",&e2.code);
//     printf("enter the salary of e2\n");
//     scanf("%f",&e2.salary);

//     fflush(stdin);

//     printf("enter the name of e3\n");
//     gets(e3.name);
//     printf("enter the code for e3\n");
//     scanf("%d",&e3.code);
//     printf("enter the salary of e3\n");
//     scanf("%f",&e3.salary);

//     return 0;
// }

#include<stdio.h>
#include<string.h>
struct employees{
    char name[25];
    int code;
    float salary;
};
int main()
{
    struct employees e1,e2,e3;
    printf("enter the name of e1\n");
    scanf("%s",e1.name);
    printf("enter the code for e1\n");
    scanf("%d",&e1.code);
    printf("enter the salary of e1\n");
    scanf("%f",&e1.salary);

    //fflush(stdin);
     
    printf("enter the name of e2\n");
    scanf("%s",e2.name);
    printf("enter the code for e2\n");
    scanf("%d",&e2.code);
    printf("enter the salary of e2\n");
    scanf("%f",&e2.salary);

    //fflush(stdin);

    printf("enter the name of e3\n");
    scanf("%s",e3.name);
    printf("enter the code for e3\n");
    scanf("%d",&e3.code);
    printf("enter the salary of e3\n");
    scanf("%f",&e3.salary);

    printf("the employees details are\n");

    printf("%s\n%d\n%f\n",e1.name,e1.code,e1.salary);
    printf("%s\n%d\n%f\n",e2.name,e2.code,e2.salary);
    printf("%s\n%d\n%f\n",e3.name,e3.code,e.salary);

    return 0;
}