// input output of 2d array //
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
