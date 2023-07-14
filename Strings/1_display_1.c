# include<stdio.h> 

int main(){
     char str[]="nishat";
     char *ptr=str;
    //  for(int i=0;i<=6;i++)
    //  {
    //     printf("%c\n",str[i]);
    //  }
    while(*ptr!='\0'){
        printf("%c",*ptr);
        *ptr++;

    }
     return 0;
}