#include <stdio.h>

int main()
{
    int t, s, e;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &s, &e);
        int sum = 0;
        for(int j=s;j<=e;j++)
        {
            if(j%2!=0)
            {
                sum+=j;
            }
        }

        

        printf("case %d: %d\n", i, sum);
    }
    return 0;
}