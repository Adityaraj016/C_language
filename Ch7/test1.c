// #include<stdio.h>
// int main()
// {
//     int s[2][2]={{3,4},{5,6}};
//      for(int i=0;i<2;i++){
    
//     printf("%u,%u\n",&s[i][0],&s[i][1]);
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int s[4][2]={{3,4},{5,6},{8,9},{546,10}};
//      for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
    
//     printf("%d\t",s[i][j]); //or *(s[i]+j)   or *(*(s+i)+j)  //all values are same
    
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int s[4][2]={{3,4},{5,6},{8,9},{546,10}};
//     int (*p)[2];
//     int *pint;
//      for(int i=0;i<4;i++){
//         p=&s[i];
//         pint=(int *)p;
//         printf("\n");
//         for(int j=0;j<2;j++){
    
//     printf("%d\t",*(pint +j)); //or *(s[i]+j)   or *(*(s+i)+j)  //all values are same
    
//         }
        
//     }
// }

// #include<stdio.h>
// int main()
// {
//     static int a[]={0,1,2,3,4};
//     int *p[]={a,a+1,a+2,a+3,a+4};
//     printf("%u,%u,%d\n",p,*p,*(*p));
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n[3][3]={{2,4,3},{6,8,5},{3,5,1}};
//     printf("%d,%d,%d\n",*n,n[1][1],n[2][2]);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n[3][3]={2,4,3,6,8,5,3,5,1};
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
    
//     printf("%d,%d\t",n[i][j],*(*(n+i)+j)); //or *(s[i]+j)   or *(*(s+i)+j)  //all values are same
    
//         }
//     printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int twod[][2]={2,4,6,8};
    printf("%d\n",twod[0][1]);   //sirg twod rakhenge to adress print hoga
    
    return 0;
}