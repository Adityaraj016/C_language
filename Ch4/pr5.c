//wap to print all armstrong number between 1 and 500
// #include<stdio.h>
// int main()
// {
//     int i=0;
//     while(i<=10)
//     {
//         printf("%d\n",i+10);
//         i++;

//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int i=0,skip=5;
    while(i<=10){
        i++;
        
        if(i!=skip){
            continue;
            
        }
        else{
            printf("%d\n",i);
        }
       
         
    }
    printf("hello\n");
    
    return 0;
}