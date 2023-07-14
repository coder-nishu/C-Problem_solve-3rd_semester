#include <stdio.h>

int main()
{
    int n, count, temp;
    while (scanf("%d", &n) == 1)
    {
        count = n;
        while (n > 1)
        {
            count += (n / 3);
            temp = n / 3 + n % 3;
            n = temp;
            if (n == 2)
            {
                n++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}