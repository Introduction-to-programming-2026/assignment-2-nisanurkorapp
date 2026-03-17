// Missing cs50.h, variable's type, semicolon, %s, and second printf argument.
#include <stdio.h>

int main(void)
{
    char name[50];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
}