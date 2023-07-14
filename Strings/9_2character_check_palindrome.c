#include <stdio.h>

int main()
{
    char text[100];
    int c = 0;
    printf("Enter the text: \n");
    gets(text);
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == text[i + 1])
        {
            c++;
            break;
        }
    }
    if (c == 0)
        printf("not palindrome\n");
    else
        printf("palindrome\n");

    return 0;
}