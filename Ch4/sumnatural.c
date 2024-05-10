//sum of first 10 natural numbers
// #include<stdio.h>
// int main()
// {
//     int n,i,sum=0;
//     printf("enter the no. of natural number you want sum\n");
//     scanf("%d",&n);
//     i=1;
//     while(i<=n){
//         sum=sum+i;
//         i++;

//     }
//     printf("the sum of first n natural numbers is %d\n",sum);
//     return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int n,i,sum=0;
//     printf("enter the no. of natural number you want sum\n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("the sum of first n natural numbers is %d\n",sum);
//     return 0;
// }


#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the no. of natural number you want sum\n");
    scanf("%d",&n);
    i=1;
    do{
        sum=sum+i;
        i++;

    }while(i<=n);
    printf("the sum of first n natural numbers is %d\n",sum);
    return 0;
}