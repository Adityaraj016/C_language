#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr=(float*)calloc(5, sizeof(float));
    for(int i=0;i<5;i++){
        printf("enter the %d element of the array\n",i);
        scanf("%f",&ptr[i]);
    }

    for(int i=0;i<5;i++){
        printf("the value of %d element of the array is %f\n",i,ptr[i]);
        
    }

    ptr=realloc(ptr,10 * sizeof(float));
    for(int i=0;i<10;i++){
        printf("enter the %d element of the array\n",i);
        scanf("%f",&ptr[i]);
    }

    for(int i=0;i<10;i++){
        printf("the value of %d element of the array is %f\n",i,ptr[i]);
        
    }

    
    free(ptr);  //memory of ptr is released after the execution of program
    return 0;
}