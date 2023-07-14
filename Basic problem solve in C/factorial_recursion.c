#include <stdio.h>
int fact(int x);

int main()
{
    int n;
    scanf("%d", &n);
    printf("the factorial %d is : %d", n, fact(n));
    return 0;
}
int fact(int x)
{
    if (x == 1)
        return 1;
    else
        return x * fact(x - 1);
}