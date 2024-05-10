//wap to count the occurance of a given charecter in the string
#include<stdio.h>
void occurance(char [],char);

int main()
{

char str[25];
int c;
printf("enter the string\n");
gets(str);
printf("%s\n",str);
printf("enter the charecter you want to check occurance\n");
scanf("%c",&c);
occurance(str,c);

return 0;
}
void occurance(char str[],char c)
{

    int count =0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==c){
            count++;
        }
        
    }
    printf("occurance =%d",count);
}