#include<stdio.h>
void table(int [],int ,int );
int main()
{
    int arr[3][10];
    int a,b,c;
    printf("enter the three elements you want table\n");
    scanf("%d%d%d",&a,&b,&c);
    table(arr[0],a,10);
    table(arr[1],b,10);
    table(arr[2],c,10);
    return 0;
}
void table(int arr[],int num,int n){
    printf("the multiplication table of %d is\n",num);
    for(int i=0;i<10;i++){
        arr[i]=num*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d * %d =%d\n",num,i+1,arr[i]);
    }

}

