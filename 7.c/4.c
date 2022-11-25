#include <stdio.h>
#define STOP '#'

int main(void)
{
    int ch;
    int n = 0;
    while ((ch = getchar()) != STOP)
    {
        if (ch == '.')
        {
            putchar('!');
            n++;
        }
        else if (ch == '!')
        {
            printf("!!");
            n++;
        }
        else
        {
            putchar(ch);
        }
    }

    return 0;
}
