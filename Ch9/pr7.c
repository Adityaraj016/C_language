//write pr6 by typedef
// #include <stdio.h>
// typedef struct complex {
//     float real;
//     float imag;
// } complex;

// complex add(complex n1, complex n2);

// int main() {
//     complex n1, n2, result;

//     printf("For 1st complex number \n");
//     printf("Enter the real and imaginary parts: ");
//     scanf("%f %f", &n1.real, &n1.imag);
//     printf("\nFor 2nd complex number \n");
//     printf("Enter the real and imaginary parts: ");
//     scanf("%f %f", &n2.real, &n2.imag);

//     result = add(n1, n2);

//     printf("Sum = %.1f + %.1fi", result.real, result.imag);
//     return 0;
// }

// complex add(complex n1, complex n2) {
//     complex temp;
//     temp.real = n1.real + n2.real;
//     temp.imag = n1.imag + n2.imag;
//     return (temp);
// }

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
    printf(" the imaginay part of complex number %fi\n",c.imag);
}