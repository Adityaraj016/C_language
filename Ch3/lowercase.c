//wap whether the char enter by user is a lowercae cahr or not
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the charecter\n");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("it is a lower case letter\n");
    }
    else if(ch>='A' && ch<='Z'){
        printf("it is uppercase charecter\n");
    }
    else{
        printf("invalid input\n");
    }
    return 0;
}