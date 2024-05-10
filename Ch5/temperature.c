#include<stdio.h>
float temperature(int x);

int main(){
    int a;
    float temp;
    printf("enter the temp in celcius\n");
    scanf("%d",&a);
    temp=temperature(a);
    printf("the temp in farhanite is %f\n",temp);
    return 0;
}
float temperature(int x){
    float temp;
    temp=(x*9.0/5.0)+32.0;
    return temp;
}