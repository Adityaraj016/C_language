//wap to generate multiplication table of a given number in text format
//male sur the file is redable and well formatted
#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    printf("neter the number you want table of\n");
    scanf("%d",&num);
    ptr=fopen("table.txt","w");  // a lagane se new table bhi add hoga 
    // write mode me karenge to pehle wala mit jata hai overwrite hai matlab.
    for(int i=1;i<=10;i++){
    fprintf(ptr,"%d * %d= %d\n",num,i,num*i);
    }
    fclose(ptr);
    printf("table of %d succesfully generated to table.txt\n",num);
    return 0;
}

//wap to generate multiplication table of a given number in text format
//male sur the file is redable and well formatted
// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     int num;
//     printf("neter the number you want table of\n");
//     scanf("%d",&num);
//     ptr=fopen("table.txt","a");  // a lagane se new table bhi add hoga 
//     // write mode me karenge to pehle wala mit jata hai overwrite hai matlab.
//     for(int i=1;i<=10;i++){
//     fprintf(ptr,"%d * %d= %d\n",num,i,num*i);
//     }
//     fclose(ptr);
//     printf("table of %d succesfully generated\n",num);
//     return 0;
// }