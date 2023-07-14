# include<stdio.h> 
#include<string.h>

     struct {
          int code;
          float salary;
          char name[100];
     }employee ;

int main(){
     struct employee e1;
     e1.code = 1582;
     e1.salary = 15.67;
     // e1.name = "nishat"; ----> it won,t work
     strcpy(e1.name,"Nishat"); //------>it wil work to initialize string.
     
     printf("%d\n",e1.code);
     printf("%f\n",e1.salary);
     printf("%s\n",e1.name);
     printf("yes i have done it");
     
     return 0;
}