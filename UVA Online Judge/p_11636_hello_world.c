#include <stdio.h>
int fib(int n);

int main()
{
    int n;
    int i = 1;
    while (scanf("%d", &n) == 1)

    {
        if (n < 0)
        {
            break;
        }
        printf("case %d: %d\n", i, fib(n));
        i++;
    }
    return 0;
}
int fib(int n)
{
   
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}