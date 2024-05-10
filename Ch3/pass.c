//wap to find out whether a student is pass or fail
#include<stdio.h>
int main()
{
    int s1,s2,s3;
    float percent;
    printf("enter the marks of three subjects respevtively out of hundred\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    percent=(s1+s2+s3)/3;

    if(percent>=40 && s1>=33 && s2>=33 && s3>=33){
    printf("student is pass\n");
    }
    else{
        printf("stdudent is fail\n");
    }


    return 0;
}