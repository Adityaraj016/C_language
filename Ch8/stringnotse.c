/*dekho char ptr[] se string input lenge na 
jaise char ptr[]="aditya raj";
aur phir
 ptr="rahul; karenge
to ye error throw karega


aur wahi char *ptr="aditya raj"
phir
ptr="rahul"
karenge to e iss metod se string ka new value rahul hi hoga
output aayega koi error nahi hai*/

#include<stdio.h>
        int main()
        {
            char *str="aditya";
            //char str[]="aditya";  
            str="rahul";
            //char str[]={'a','d','i','t','y','a','\0'}; //output is same
            printf("%s",str);
            return 0;
        }



/* strlen()
se string lenght find kiya ja skata hai
ye library function hai*/