//wap to accept marks of five students in an array and print them to the screen

#include<stdio.h>
int main()
{
    int marks[5];
    printf("enter the marks for student 1:");
    scanf("%d",&marks[0]);
    printf("enter the marks for student 2:");
    scanf("%d",&marks[1]);
    printf("enter the marks for student 3:");
    scanf("%d",&marks[2]);
    printf("enter the marks for student 4:");
    scanf("%d",&marks[3]);
    printf("enter the marks for student 5:");
    scanf("%d",&marks[4]);

    printf("marks for student 1,2,3,4,5 is %d %d %d %d %d respectively\n",marks[0],marks[1],
    marks[2], marks[3],marks[4]);
    return 0;
}
