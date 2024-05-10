/*write a function slice() to slice a string
it should change the original stribg th at noe it is a sliced string
take m and n as start and ending position for slice*/
#include<stdio.h>

void slice(char [],int ,int);
int main()
{
    char source[25]="nagpur";
    int m,n;
    printf("enter the start end ending position for slice as m and n\n");
    scanf("%d%d",&m,&n);
    printf(" the string before copying is %s\n",source);
    slice(source,m,n);
    
    return 0;
}
void slice(char target[],int m,int n){
    int i=0;
    while((i+m)<=n){
        target[i]=target[i+m];
        i++;

    }
    target[i]='\0';
    printf("sliced string=%s\n",target);
}