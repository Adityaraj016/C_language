//create an array of 5 comples numbers creted in pr5 and display them
//with help of a display funvtion .take input from user
#include<stdio.h>
#include<string.h>
typedef struct complex{
    float real;
    float imag;
}comp;
void display();
int main()
{
    comp cnum[5];
    for(int i=0;i<5;i++){
        printf("enter the real part of complex number %d\n",i+1);
        scanf("%f",&cnum[i].real);
        printf("enter the imaginary part of complex number %d\n",i+1);
        scanf("%f",&cnum[i].imag);
    }
    for(int i=0;i<5;i++){
        display(cnum[i]);
    }
    return 0;
}
void display(comp c){
    printf(" the real part of complex number %f\n",c.real);
    printf(" the imaginay part of complex number %f\n",c.imag);
}

