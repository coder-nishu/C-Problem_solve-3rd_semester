#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, nt1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d\n",t1);
        }
        else if (i == 2)
        {
            printf("%d\n",t2);
        }
        else
        {

            nt1 = t1 + t2;
            t1 = t2;
            t2 = nt1;
            printf("%d\n", nt1);

        }
    }

    return 0;
}