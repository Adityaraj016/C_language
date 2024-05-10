// //wap to check whether a number is prime or not
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     for(i=2;i<n;i++){
//         if(n%1==0 && n%n==0 && n%i!=0){
//             printf("the number is prime\n");
//             break;
//     }
        
//         else{
//             printf("the number is not prime\n");
//             break;
//         }
            
        
        
//     }
    
//     return 0;
// }



//wap to check whether a number is prime or not
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    i=2;
    while(i<n){
        
        if(n%1==0 && n%n==0 && n%i!=0){
            printf("the number is prime\n");
            break;
    }
        
        else{
            printf("the number is not prime\n");
            break;
        }
       // i++;
            
        
        
    }
    
    return 0;
}


