// print 5 to 1 using recurtion //
#include <stdio.h>
int reca(int n);
int main()
{
    printf("%d\n",reca(5));
    return 0;
}
int reca(int n)
{
    if (n == 1)
      
        return reca(n - 1);
}