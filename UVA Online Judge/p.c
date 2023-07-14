#include<stdio.h>
int count (int n);
int main()
{
   int x, c;
   printf("Enter a number: ");
   scanf("%d", &x);
   c = count(x);
   printf("%d is the total digit in %d", c, x);
}
int count(int n)
{
   if (n < 10)
       return 1;
   else
       return 1 + count(n / 10);
}

