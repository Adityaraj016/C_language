//write a function to obtain the prime factors of the number entered through the keyboard
#include<stdio.h>
int primefact(int x);
int main(){
    int number;
    int factorial;
    printf("enter the number\n");
    scanf("%d",&number);
    primefact(number);
    return 0;
}
int primefact(int x){
    int a;
    for(a=2;a<=x;a++){
        if(x%a==0){
            printf("%d,",a);
            x=x/a;
            a--;
            

        }
        
    }

}