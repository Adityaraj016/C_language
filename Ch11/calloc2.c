//write a program to create a dynamic array of 5 floats using calloc()
#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    int n;
    printf("enter the size of array you want\n");
    scanf("%d",&n);
    ptr=(float*)calloc(n, sizeof(float));
    for(int i=0;i<n;i++){
        printf("enter the %d element of the array\n",i);
        scanf("%f",&ptr[i]);
    }

    for(int i=0;i<n;i++){
        printf("the value of %d element of the array is %f\n",i,ptr[i]);
        
    }
    return 0;
}