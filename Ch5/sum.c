//wap'\ to calculate sum of first n natural numbers
#include<stdio.h>
int sum(int);
int main(){
int n,i,result;
printf("enter the numbers of tems\n");
scanf("%d",&n);
result=sum(n);
printf("sun of first n ratural number is %d",result);
return 0;


}
int sum(x){
    if(x!=0)
    return x+sum(x-1);
    else
    return x;
}
