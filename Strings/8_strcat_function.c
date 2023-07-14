# include<stdio.h> 

int main(){
     char s1[30]="Hello";
     char s2[]="Nishat";
     strcat(s1,s2);
     printf("now s1 will be \"%s\" ",s1); //s2 will add in to s1.. new s1=s1+s2
     return 0;
}