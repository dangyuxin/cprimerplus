#include <stdio.h>
#include <math.h>

int f(char *);
int main(void)
{
    char *pbin = "01001001";
    printf("%d",f(pbin));
    return 0;
}

int f(char *pbin)
{
    int i;
    int sum = 0;
    for (i = 8; i >= 1; i--)
    {
        sum += (pbin[8 - i] - 48) * (1<<i-1);
    }
    return sum;
}