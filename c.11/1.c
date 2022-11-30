#include <stdio.h>

void getnchar(char str[], int n);

int main()
{
    char input[10];
    getnchar(input,10);
    puts(input);
    return 0;
}

void getnchar(char str[], int n)
{
    int i = 0;

    while (i < n - 1)
    {
        str[i++] = getchar();
    }
    str[i] = '\0';

    return;
}
