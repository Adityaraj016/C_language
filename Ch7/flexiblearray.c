// //flexible array size
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int max,i,*p;
//     printf("enter array size:\n");
//     scanf("%d",&max);
//     p=(int*)malloc(max*sizeof(int));


//     for(i=0;i<max;i++)
// {
//     p[i]=i*i;
//     printf("%d\t",p[i]);
// }
// return 0;
// }

//flexible array size
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max,i;
    printf("enter array size:\n");
    scanf("%d",&max);
    //p=(int*)malloc(max*sizeof(int));
    int arr[max];


    for(i=0;i<max;i++)
{
    arr[i]=i*i;
    printf("%d\t",arr[i]);
}
return 0;
}