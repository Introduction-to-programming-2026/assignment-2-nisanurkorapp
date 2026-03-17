#include <stdio.h>
#include <string.h>

int string_length(char s[]);

int main(void)
{
    char name[100];

    printf("Name: ");
    fgets(name, sizeof(name), stdin);

    int len = string_length(name);
    printf("Length: %d\n", len);
}

int string_length(char s[])
{
    int length = 0;

    while (s[length] != '\0' && s[length] != '\n')
    {
        length++;
    }

    return length;
}