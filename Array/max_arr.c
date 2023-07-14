# include<stdio.h> 

int main(){
     int a[100],i,n,max=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);

     }
     for(i=0;i<n;i++)
     {
        if(max>a[i])
        {
            max=a[i];
        }
     }
     return 0;
}