// input from user.if input is even number replace there with 5//
#include <stdio.h>

int main()
{
    int n, i, j, array[10][10];

    printf("Enter row & colomn numbers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Inputing value of %d by %d: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j && i % 2 == 0 && array[i][j] % 2 == 0)
            {
                array[i][j] = 100;
            }
            else if (i == j && i % 2 != 0 && array[i][j] % 2 != 0)
            {
                array[i][j] = 99;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
