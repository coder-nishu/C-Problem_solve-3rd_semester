// Fibonacci

#include <stdio.h>
int main()
{
   int n1 = 0, n2 = 1, n = 0, i, k;
   printf("Enter a Number: ");
   scanf("%d", &k);
   for (i = 3; i <= k; i++)
   {
      n = n2 + n1;
      n1 = n2;
      n2 = n;
   }
   printf("%d nth Fibonacci is %d", k, n);
   return 0;
}
