# include<stdio.h> 

int main(){
     int a[5],n,temp=0;
     scanf("%d", &n);
    // for (int i = 1; i <= 3; i++)
    // {
        for(int j=0;j<n;j++)
        scanf("%d",&a[j]);
    // }
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d",a[i]);
    }

     return 0;
}