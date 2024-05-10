//wap that convetrs a string like "124" to an interger
#include<stdio.h>
int main()
{
    char str[6];
    int num=0;
    printf("enter the string in form of 124\n");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=48 && str[i]<=57){
            num=num*10 +(str[i]-48);
        }
        else{
            printf("invalid string\n");
            return 2;    // return 1 ya 2 se program wahi pe ruk jayega
        }
    }
    printf("the number is %d\n",num);
    return 0;
}