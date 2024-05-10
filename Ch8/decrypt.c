//wap to encrpt a string by adding 1 to the ascii value of its charecters

#include<stdio.h>
void decrypt(char []);

int main()
{
    char str[50]="dpnf!mfut!hp!up!qbsuz\n";
    printf("normal string=%s\n",str);
    decrypt(str);


return 0;
}
void decrypt(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=str[i]-1;
    }
    printf("decrpted string =%s",str);
}
