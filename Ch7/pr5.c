//wap containing a function which reverses the array passed to it,



//nahi hua
#include<stdio.h>
void reverse(int *rev,int);
int main()
{
    int arr[]={2,4,5,2,9};
    for(int i=0;i<5;i++){
    printf("%d\t",arr[i]);
    }
    reverse(arr,5);
    return 0;
}
void reverse(int *rev,int x){
    int i,j;
    for( i=0,j=5;i<5,j>=0;i++,j--){
        rev[j]=rev[i];
    }
    for(j=0;j<5;j++){
        printf("%d\n",rev[j]);
    }
}