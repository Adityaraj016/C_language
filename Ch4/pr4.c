//wap to print all the ascii values and their equivalent charescters
#include<stdio.h>
int main()
{
   // char ascii;
    int i;
    i=0;
    while(i<=255){
        printf("%d=%c\n",i,i);
        i++;

    }
    return 0;
}