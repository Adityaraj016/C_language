//wap to encrpt a string by adding 1 to the ascii value of its charecters

#include<stdio.h>
void encrypt(char []);

int main()
{
    char str[50]="come lets go to party\n";
    printf("normal string=%s\n",str);
    encrypt(str);


return 0;
}
void encrypt(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=str[i]+1;
    }
    printf("encrpted string =%s",str);
}
