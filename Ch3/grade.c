#include<stdio.h>
int main()
{
    int marks,grade;
    printf("enter marks");
    scanf("%d",&marks);
    grade=marks/10;

    switch(grade){
       
        case 9:
        printf("a grade\n");
        break;

        case 8:
        printf("b grade\n");
        break;

        case 7:
        printf("c grade\n");
        break;

        case 6:
        printf("d grade\n");
        break;

        default:
        printf("fail\n");
        break;


        
    }

    return 0;
}