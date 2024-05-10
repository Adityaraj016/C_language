#include<stdio.h>
float average(int x,int y,int z);

int main()
{
    int a,b,c;
    float avg;
    printf("enter the three numbers respectively\n");
    scanf("%d%d%d",&a,&b,&c);
    avg=average(a,b,c);
    printf("the average of three numbers is %f",avg);
    return 0;

}
float average(int x,int y,int z){
    float av;
    av=(x+y+z)/3.0;
    return av;
}