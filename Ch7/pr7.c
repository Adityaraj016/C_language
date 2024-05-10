//create an array of sixe 3*10 containing multilication
//tables of numbers 2,7 and 9 repectively
#include<stdio.h>
int main()
{
    int arr[3][10];
    int a,b,c;
    printf("enter the three elements you want table\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("the multiplicatin table of %d\n",a);
    for(int i=0;i<1;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=a*(j+1);
            printf("%d * %d =%d\n",a,j+1,arr[i][j]);

        }
    }
    printf("the multiplicatin table of %d\n",b);
    for(int i=1;i<2;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=b*(j+1);
            printf("%d * %d =%d\n",b,j+1,arr[i][j]);

        }
    }
    printf("the multiplicatin table of %d\n",c);
    for(int i=2;i<3;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=c*(j+1);
            printf("%d * %d =%d\n",c,j+1,arr[i][j]);

        }
    }
    return 0;
}