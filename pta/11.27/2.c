#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m))
        printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n))
        printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
#include <math.h>
int narcissistic(int number)
{
    int a[5];
    int n = number;
    int i;
    int sum = 0;
    int count = 0;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 10;
        n = n / 10;
        count++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        sum += pow(a[j], count);
    }
    if (sum == number)
        return 1;
    return 0;
}
void PrintN(int m, int n)
{
    int x;
    for (x = m + 1; x <= n - 1; x++)
    {
        if (narcissistic(x))
            printf("%d\n", x);
    }