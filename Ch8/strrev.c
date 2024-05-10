//reverse a string

#include<stdio.h>
#include<string.h>
        int main()
        {
            char str[]="aaditya";  
            
            //char str[]={'a','d','i','t','y','a','\0'}; //output is same
            strrev(str);
            printf("%s\n",str);
        
            return 0;
        }
