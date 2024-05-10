//create a two d array by taking input from the user
//write a display function to print the context of this 2 day array to the screen
#include<stdio.h>
void display(int ,int);

int main()
{
    int n_students=3;
    int n_subjects=5;
    display(n_students,n_subjects);
    return 0;
}
void display(int x,int y)
{
    int marks[3][5];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("enter the marks of student %d in subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d\t",marks[i][j]); 
            
            
        }
        printf("\n");
    }

}