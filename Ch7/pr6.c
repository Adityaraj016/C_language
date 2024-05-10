//wap containing functions which counts the numbers of positive integers in an array
// #include<stdio.h>
// void count(int[],int);
// int main(){
//     int arr[]={2,3,6,-1,-4,6,8};
//     count(arr,7);
//     return 0;
// }
// void count(int arr2[],int n){
//     int count1=0;
//     for(int i=0;i<n;i++){
//         if(arr2[i]>0){
//             count1=count1+1;
//         }
//     }
//     printf("total number of positive intergers is %d",count1);
    
// }

#include<stdio.h>
void count(int[],int);
int main(){
    int arr[10];
    printf("input array elments\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    count(arr,10);
    return 0;
}
void count(int arr2[],int n){
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr2[i]>0){
            count1=count1+1;
        }
    }
    printf("total number of positive intergers is %d",count1);
    
}