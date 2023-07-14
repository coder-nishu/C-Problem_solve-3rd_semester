# include<stdio.h> 

int main(){
     char text[100];
     int c=0,d=0,o=0;
    printf("Enter the text: \n");
    gets(text);
    for(int i=0; text[i]!='\0';i++)
    {
        if( (text[i]>= 'A' && text[i]<= 'Z') || (text[i]>= 'a' && text[i]<= 'z') )
        {
            c++;
        }
        else if( text[i]>=0)
        {
            d++;
        }
        else 
        {
            o++;
        }
    }
    printf("letter: %d \ndigit: %d \nothers: %d \n",c,d,o);
     return 0;
}