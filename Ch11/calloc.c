//write a program to create a dynamic array of 5 floats using calloc()
#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    // int n;
    // printf("enter the size of array you want\n");
    // scanf("%d",&n);
    // float ptr[n];  //ye karenge to straight forwaed hojayega
    //par agar user se inpurtlena hai to calloc try lkarenge ya malloc 
    
    ptr=(float*)calloc(5, sizeof(float));
    for(int i=0;i<5;i++){
        printf("enter the %d element of the array\n",i);
        scanf("%f",&ptr[i]);
    }

    for(int i=0;i<5;i++){
        printf("the value of %d element of the array is %f\n",i,ptr[i]);
        
    }
    return 0;
}

//calloc() me agar scanf()ki madad se koi bhi input enter na karaya jaye

//aur direct value print ki jaye to ye 0 dega
//kyuki zero calloc me khud se add ho jata hai
//agar ham koi value na de to

// if(ptr==NULL){
//         puts("unable to open file");
//         exit(0);
//     } null pointer hau ya nahi isse check hoga
