//wap to reda the txt file charecter by charecter
//nad write its content twice in a seperate file
#include<stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    char c;
    ptr1=fopen("aditya.txt","r");
    ptr2=fopen("ad.txt","w");
    c=fgetc(ptr1);
    while(c!=EOF){   //EOF->end of file
    fputc(c,ptr2);
    
    c=fgetc(ptr1);
    }
    
    
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}