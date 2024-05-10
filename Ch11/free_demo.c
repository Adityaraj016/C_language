//write a program to create a dynamic array of 5 floats using malloc()
//free() function uses
//free() se memory consumption nahi badhti hai same rahegi
#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr=(float*)malloc(5 * sizeof(float));
    for(int i=0;i<5;i++){
        printf("enter the %d element of the array\n",i);
        scanf("%f",&ptr[i]);
    }

    for(int i=0;i<5;i++){
        printf("the value of %d element of the array is %f\n",i,ptr[i]);
        
    }
    free(ptr);  //memory of ptr is released after the execution of program
    return 0;
}