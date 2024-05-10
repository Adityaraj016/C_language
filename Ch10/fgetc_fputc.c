#include<stdio.h>
//harry notes
//write mode me agar file nahi bhi bani rahegi to ban jayegi apne aap
//read mode me existing file hi open hogi nahi to null return karega
int main()
{
    FILE *ptr;
    // ptr=fopen("getcdemo.txt","r");
    // //fgetc(ptr);
    // printf("the charecter is %c\n",fgetc(ptr));
    // printf("the charecter is %c\n",fgetc(ptr));
    // printf("the charecter is %c\n",fgetc(ptr));
    // printf("the charecter is %c\n",fgetc(ptr));
    // printf("the charecter is %c\n",fgetc(ptr));
    // printf("the charecter is %c\n",fgetc(ptr));

    ptr=fopen("putcdemo.txt","w");
    fputc('t',ptr);
    fputc('h',ptr);
    fputc('i',ptr);
    fputc('t',ptr);
    fclose(ptr);
    return 0;
}