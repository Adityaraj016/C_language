#include<stdio.h>
#include<string.h>
void display1(char *,int,float,char *);
void display2();
void display3();
struct employees{
    char name[25];
    int code;
    float salary;
    char city[25];
};
int main(){
    struct employees e1={"aditya",23,453.68,"nagpur"};
    display1(e1.name,e1.code,e1.salary,e1.city);
    display2(e1);
    display3(&e1);
    return 0;

}

void display1(char *a,int b,float c,char *d){
    printf("%s %d %f %s\n",a,b,c,d);
}
void display2(struct employees emp){
   printf("%s %d %f %s\n",emp.name,emp.code,emp.salary,emp.city); 
}
void display3(struct employees *emp){
   printf("%s %d %f %s\n",(*emp).name,(*emp).code,(*emp).salary,emp->city); 
}