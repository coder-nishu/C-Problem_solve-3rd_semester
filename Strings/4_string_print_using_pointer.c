# include<stdio.h> 

int main(){
     char *ptr="nishat";
      ptr = "harry"; // can re initialized in pointer. but not in str[]="nishat"..
     printf("%s",ptr); // it will print harry not nishat..we re initiazed it.

     return 0;
}