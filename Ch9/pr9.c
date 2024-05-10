//write a structure capable of storungdate
//write a function to compare these dates
#include<stdio.h>
void display();
typedef struct date{
    int date;
    int month;
    int year;

}date;
//void compare(date d1,date d2);
int compare(date d1,date d2);
int main()
{
    
    date d1={2,11,23};
    date d2={5,11,25};
    int num;
    display(d1);
    display(d2);
    num=compare(d1,d2);
    printf("comparision of two dates gives %d\n",num);

}
void display(date d){
    printf("the date  is %d/%d/%d\n",d.date,d.month,d.year);

}
// void compare(date d1,date d2){
//     if(d1.date==d2.date && d1.==d2.month && d1.year==d2.year){
//         printf("dates are equal\n");
//     }
//     else{
//         printf("dates are not equal\n");
//     }
// }

int compare(date d1,date d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
    
    return 0;
}
