//creat a string using " " and print its content using loop
// #include<stdio.h>
// int main()
// {
//     char str[]="aditya";
//     
//     for(int i=0;i<6;i++){
//         printf("%c\t",str[i]);
        
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    // char str[]="aditya";  
    char str[]={'a','d','i','t','y','a','\0'}; //output is same
    char *ptr=&str[0];  //&str[0] bhi likh sakte hai ys direct str bhi likh sakte hai
    while(*ptr!='\0'){
        printf("%c\t",*ptr);
        ptr++;
        
    }
    return 0;
} 


// //creat a string using " " and print its content using loop
// #include<stdio.h>
// int main()
// {
//     char str[]="aditya";
//     char *ptr=&str[0];
//     for(int i=0;i<6;i++){
//         if(*ptr!='\0'){
//         printf("%c\t",*ptr);
//         ptr++;
//         }
//         else{
//             printf("nothing\n");
//         }
        
//     }
//     return 0;
// }
