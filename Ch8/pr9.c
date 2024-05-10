//wap to check whether the given charecter is present in the string or not
#include<stdio.h>
void present(char [],char);

int main()
{

char str[25];
int c;
printf("enter the string\n");
gets(str);
printf("%s\n",str);
printf("enter the charecter you want to check occurance\n");
scanf("%c",&c);
present(str,c);

return 0;
}
void present(char str[],char c)
{

    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==c){
            printf("%d\n",i);
            count++;
        }
        
    }
    if(count>0){
        printf("the charecter is present\n");
    }
    else{
        printf("the charecter is  not present\n");

    }
    
    printf("charecter %c occured %d times\n",c,count);
}