#include <stdio.h>
#include <string.h>

int main()
{
    int text[100], l, c = 0;
    gets(text);
    l = (strlen(text)-1);
    for (int i = 0; i < (l/2); i++)
    {
        if (text[i] != text[l - i])
        {
            c++;
            break;
        }
    }
    if (c == 0)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}