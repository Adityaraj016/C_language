/*write a function which returns sum,average and standard deviation*/
#include<stdio.h>
#include<math.h>
void sumaverage(int *,float *,float *);
int main()
{
    int sum;
    float average,deviation;
    sumaverage(&sum,&average,&deviation);
    printf("the sum is %d\n average is %f\n and std deviation is %f\n",sum,average,deviation);
    return 0;

}
sumaverage(int *sum,float *average,float *deviation)
{
    int n1,n2,n3,n4,n5;
    printf("enter the five numbers ypu want sum,average and deviation\n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    *sum=(n1+n2+n3+n4+n5);
    *average=*sum/5;
    *deviation=sqrt((pow((n1-*average),2.0)+pow((n2-*average),2.0)+pow((n3-*average),2.0)
    +pow((n4-*average),2.0)+pow((n5-*average),2.0))/4);
}