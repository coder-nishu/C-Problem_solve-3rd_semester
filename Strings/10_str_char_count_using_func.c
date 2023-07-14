#include <stdio.h>
#include <string.h>
int strl(char *str);

int main()
{
    char str[100];

    printf("Input a string: \n");
    gets(str);
    printf("the lenth of string is %d", strl(str));

    return 0;
}

int strl(char *str)
{
    int i = 0, count = 0;
    char *ptr = str;

    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }

    return count;
}