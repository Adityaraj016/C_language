#include<stdio.h>
int main(){
    int i=34;
    int *j=&i;
    printf("the value of i is %u\n",*j);
    printf("the value of j is %d\n",*(&j));
    return 0;
}