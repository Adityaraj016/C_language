//write a structure capable of storing time
//write a function to compare these time
#include<stdio.h>
void display();
typedef struct time{
    int hour;
    int min;
    int sec;

}time;
//void compare(date d1,date d2);
int compare(time t1,time t2);
int main()
{
    
    time t1={2,11,23};
    time t2={5,11,25};
    int num;
    display(t1);
    display(t2);
    num=compare(t1,t2);
    printf("comparision of two time gives %d\n",num);

}
void display(time t){
    printf("the time  is %d hours%d min%d seconds\n",t.hour,t.min,t.sec);

}
// void compare(date d1,date d2){
//     if(d1.date==d2.date && d1.==d2.month && d1.year==d2.year){
//         printf("dates are equal\n");
//     }
//     else{
//         printf("dates are not equal\n");
//     }
// }

int compare(time t1,time t2){
    if(t1.hour>t2.hour){
        return 1;
    }
    if(t1.hour<t2.hour){
        return -1;
    }
    
    if(t1.min>t2.min){
        return 1;
    }
    if(t1.min<t2.min){
        return -1;
    }
    if(t1.sec>t2.sec){
        return 1;
    }
    if(t1.sec<t2.sec){
        return -1;
    }
    
    return 0;
}
