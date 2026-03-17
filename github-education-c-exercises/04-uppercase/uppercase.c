#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char s[100];

    printf("Before: ");
    fgets(s, sizeof(s), stdin);

    printf("After:  ");

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }

    printf("\n");
}