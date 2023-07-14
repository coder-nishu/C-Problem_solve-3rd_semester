#include<stdio.h>
int main (){
    char a='9';
   float b;
    do{
     b=a++;

    }while((a++)<48);
    
    printf("The value of a = %c and b= %0.1f \n", a,b);
    return 0;
    }
