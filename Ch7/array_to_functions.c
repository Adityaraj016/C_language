#include<stdio.h>
void printarray(int *,int);
int main()
{
    int arr[]={20,40,2,31,131,131,13333};
    printarray(arr,7);
    return 0;
}
void printarray(int *ptr,int n)
{
    for(int i=0;i<7;i++){
        printf("the value of element %d is %d\n",i+1,*ptr);
        ptr++;     //ptr++ se next adrees me pahuch jayenge jo ki int me 4bytes add hota hai
                   //aur next addres me 40 value hai
    }
}
// void printarray(int ptr[],int n)
// {
//     for(int i=0;i<7;i++){
//         printf("the value of element %d is %d\n",i+1,ptr[i]);
//     }
// }