//contruvt a show function to display the content of employee

#include<stdio.h>
#include<string.h>
struct employees{
    char name[25];
    int code;
    float salary;
};
void show(struct employees emp);
int main()
{
    struct employees e1;
    strcpy(e1.name,"harry");
    e1.code=101;
    e1.salary=34567.8;
    show(e1);
    return 0;

}

void show(struct employees emp)
{
   printf("the name of employee is %s\n",emp.name);
   printf("the code of employee is %d\n",emp.code); 
   printf("the salary of employee is %f\n",emp.salary);  
}