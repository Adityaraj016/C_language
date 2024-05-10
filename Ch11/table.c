//create an array of multilication table capable of storing table of 7 uoto 10
//now use realloc to make it store 15 numbers(7*15)
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("enter the number you want table of\n");
    scanf("%d",&n);
    ptr=(int*)malloc(10 * sizeof(float));
    printf("the table of the number %d is\n",n);
    for(int i=0;i<10;i++){
        
        printf("%d*%d=%d\n",n,i+1,n*(i+1));
    }

    

    ptr=realloc(ptr,15 * sizeof(float));
    printf("the table of the number %d upto 15 terms is\n",n);
    for(int i=0;i<15;i++){
        ptr[i]=n*(i+1);
        printf("%d*%d=%d\n",n,i+1,ptr[i]);
    }

    
   
    free(ptr);  //memory of ptr is released after the execution of program
    return 0;
}