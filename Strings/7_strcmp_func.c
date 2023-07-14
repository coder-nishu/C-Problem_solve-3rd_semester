# include<stdio.h> 

int main(){
     char s1[30]="Hello";
     char s2[]="Nishat";
     int var = strcmp(s1,s2); // return neg value bcz 1st string char "H"ascii_val < "N" ascii value
     printf("the value of var is %d",var);
     return 0;
}