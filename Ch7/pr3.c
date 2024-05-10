//wap to creaye an array of 10 integers and store multiplication table of 5 in it
#include<stdio.h>
int main()
{
    int arr[10];
    int n;
    printf("enter the number you want multiplication table :");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        arr[i]=n*(i+1);
        printf("%d * %d is %d\n",n,i+1,arr[i]);

   }
//    for(int i=0;i<10;i++){
//         printf("%d * %d is %d\n",n,i+1,arr[i]);

//    }
   return 0;
    

}