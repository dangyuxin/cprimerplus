#include <stdio.h>

int Find_Bits(int);

int main(void)
{
    int sum;
    while (scanf("%d", &sum) == 1)
    {
        printf("%d\n", Find_Bits(sum));
    }
    return 0;
}

int Find_Bits(int sum)
{
    int count = 0;
    while (sum)
    {
        if (sum % 2 == 1)
        {
            count++;
            sum -= 1;
        }
        sum /= 2;
    }
    return count;
}