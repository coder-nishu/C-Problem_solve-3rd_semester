# include<stdio.h> 

int main(){
     int a[6]={21,23,12,97,57,3},max=0,min=0;
     for(int i=0;i<6;i++)
     {
        if(a[i]>max)
        {
            max=a[i];
        }
        else
        {
            min=a[i];
        }
     }
     printf("max=%d\t min=%d",max,min);
     return 0;
}