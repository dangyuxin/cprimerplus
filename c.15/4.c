#include <stdio.h>

int Find_Open(int, int);

int main(void)
{
    int bit, num;
    while (scanf("%d", &num) == 1)
    {
        while (getchar() != '\n')
            continue;
        scanf("%d", &bit);
        printf("The bit status is %d.\n", Find_Open(num, bit));
    }
    return 0;
}

int Find_Open(int num, int bit)
{
    int status = 0;

    while (bit--)
        num /= 2;
    if (num % 2 == 1)
        status = 1;

    return status;
}