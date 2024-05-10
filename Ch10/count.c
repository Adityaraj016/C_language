//count chars ,spaces ,tabs nad new lines
#include<stdio.h>

int main()
{
    FILE *ptr;
    char c;
    int nol=0,not=0,nob=0,noc=0;
    ptr=fopen("ques1.c","r");
    
    while(1){
        c=fgetc(ptr);
        if(c==EOF){
            break;
        }
        noc++;
        if(c==' '){
            nob++;
        }
        if(c=='\n'){
            nol++;
        }
        if(c=='t'){
           not++ ;
        }
    }
    fclose(ptr);
    printf("number of charecters=%d\n",noc);
    printf("number of blanks=%d\n",nob);
    printf("number of tabs=%d\n",not);
    printf("number of lines=%d\n",nol);
    return 0;
}