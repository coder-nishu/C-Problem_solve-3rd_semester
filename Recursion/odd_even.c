// WAP to print numbers from 1 to 10 in such a way that when number is odd,add 1 and when number is even,substract
# include<stdio.h> 
void even();
void odd();
int n=1;

int main(){
    odd() ;
     return 0;
}
void odd(){
if(n<=10)
{
    printf("%d",n+1);
    n++ ;
    even();
}
return;
}
void even(){
    if(n<=10)
    {

    printf("%d",n-1);
    n++;
    odd();
    }
    return;
}