#include<stdio.h>
int main()
{
    int n_rows=3;
    int n_columns=3;
    int matrix[3][3];

    for(int i=0;i<n_rows;i++){
        for(int j=0;j<n_columns;j++){
            printf("enter the element of  %d rows and %d colums\n",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<n_rows;i++){
        for(int j=0;j<n_columns;j++){
            printf(" %d\t",matrix[i][j]);
    }
    printf("\n");
    }
return 0;
}