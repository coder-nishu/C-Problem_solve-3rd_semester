#include <stdio.h>

int main()
{
    long long int n, rem;
    while (1)
    {
        scanf("%lld", &n);
        if (n == 0)
        {
            break;
        }
         long long int sum=0;
        while(n)
        {
           while(n!=0)
           {
            sum+=(n%10);
            n=n/10;
           }
           if(sum/10==0)
            break;
           else
            {
                n=sum;
                sum=0;
            } 
        }
        printf("%lld\n",sum);
    }
    return 0;
}
