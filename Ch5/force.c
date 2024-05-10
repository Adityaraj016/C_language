//write a function to calculate force of attraction on a body of mass eexerted by earth
#include<stdio.h>
float force(int x);

int main()
{
    int mass;
    float g=9.8;
    float force_exterted;
    printf("enter the mass of the body\n");
    scanf("%d",&mass);
    force_exterted=force(mass);
    printf("the force of attraction on body is %f newton\n",force_exterted);
    return 0;
}
float force(int x){
    float g=9.8;
    float force_exterted;
    force_exterted=x*g;
    return force_exterted;
}