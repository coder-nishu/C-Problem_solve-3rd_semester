#include <stdio.h>

int main()
{
    int f_digit, l_digit, sum = 0;
    scanf("%d %d", &f_digit, &l_digit);
    if (f_digit < l_digit)
    {
        for (int i = f_digit; i < l_digit; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
    }
        else
        {
            for (int i = l_digit; i < f_digit; i++)
            {
                if (i % 2 != 0)
                    sum += i;
            }
        }
    
    printf("%d", sum);

    return 0;
}