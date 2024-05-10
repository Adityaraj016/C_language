//take name and salary of two employees as input from the user
//write the to a txt file i foollowing format
//  name1,salary
// name2,salary
#include<stdio.h>

int main()
{
    FILE *ptr;
    char name1[25],name2[25];
    int salary1;
    int salary2;
    
    printf("enter name of its employe 1\n");
    scanf("%s",name1);
    printf("enter name of its employe 2\n");
    scanf("%s",name2);
    
    printf("enter sakary of employye 1\n");
    scanf("%d",&salary1);
    printf("enter sakary of employye 2\n");
    scanf("%d",&salary2);
    ptr=fopen("employee.txt","w");
    fprintf(ptr,"%s,%d\n",name1,salary1);
    fprintf(ptr,"%s,%d\n",name2,salary2);
    fprintf(ptr,"the");
    fclose(ptr);
    
    return 0;
}