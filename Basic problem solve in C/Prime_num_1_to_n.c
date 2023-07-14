#include<stdio.h>
int main()
{
    int i,n,j,flag=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i % j == 0)
            {
                flag=1;
                break;                

            }
        }
         if(flag==0)
        {
             printf("%d is a prime number.\n",i);
        }
        
        if(flag==1)
        {
             printf("%d is not prime number.\n",i);
        }
        flag=0;
    }
    return 0;
}