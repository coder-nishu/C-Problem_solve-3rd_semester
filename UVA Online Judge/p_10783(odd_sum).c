#include <stdio.h>

int main()
{
    int t, a, b,sum;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &a);
        scanf("%d",&b);
        sum = 0;
        for(int j=a;j<=b;j++)
        {
            if(j%2==1)
            {
                sum+=j;
            }
        }

        

        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
# include<stdio.h> 
int j=1;

int main(){
     int tc;
     int a,b,i;
     scanf("%d",&tc);
     while(tc--)
     {
        int sum=0;
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i+=2)
        {
            if(i%2==0)
            {
                i++ ;
            }
            sum+=i;
        }
        printf("Case %d: %d\n",j,sum);
        j++ ;
     }
     return 0;
}