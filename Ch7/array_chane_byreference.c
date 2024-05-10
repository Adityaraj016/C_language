//change values in main
#include<stdio.h>
void printarray(int *,int);
int main()
{
    int arr[]={20,40,2,31,131,131,13333};
    printarray(arr,7);
    printf("%d\n",arr[4]);
    return 0;
}
// void printarray(int *ptr,int n)
// {
//     for(int i=0;i<7;i++){
//         printf("the value of element %d is %d\n",i+1,*(ptr+i));
//     }
//     *(ptr+2)=5555;
// }


void printarray(int ptr[],int n)
{
    //ptr[4]=6748;
    for(int i=0;i<7;i++){
        printf("the value of element %d is %d\n",i+1,ptr[i]);
    }
    ptr[4]=6748;
    
}