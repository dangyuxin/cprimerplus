#include <stdio.h>

int Count_Digit(const int N, const int D);

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit(const int N, const int D)
{
    int n = N;
    int a[10];
    int count = 0;
    int i, j;
    if (n < 0)
        n = 0 - n;
    if (n == 0 && D == 0)
        return 1;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 10;
        n /= 10;
    }
    for (j = i - 1; j >= 0; j--)
    {
        if (a[j] == D)
            count++;
    }
    return count;
}
