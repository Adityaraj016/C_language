//write a function to obtain the prime factors of the number entered through the keyboard
#include<stdio.h>
void primefact(int x,int a);
int main(){
    int number;
    int factorial;
    printf("enter the number\n");
    scanf("%d",&number);
    primefact(number,2);
    return 0;
}
void primefact(int x,int a){
    
    if(a<=x){
        if(x%a==0){
            printf("%d,",a);
            x=x/a;
        }
        else{
        a++;
        }
        return(primefact(x,a));

    }
   

}