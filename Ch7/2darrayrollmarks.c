//wap that stores rooll numners and marks obtained by a student side by side in a matrix
#include<stdio.h>
int main()
{
    int stud[4][2];
    int i,j;
    for(i=0;i<4;i++)
    {
        printf("enter the roll no and marks\n");
        scanf("%d%d",&stud[i][0],&stud[i][1]);
    }
    printf(" the roll no and marks are\n");
    for(i=0;i<4;i++)
    {
        printf("%d   %d\n",stud[i][0],stud[i][1]);
        
    }
    return 0;
}

