#include <stdio.h>

#define MAXN 10

double f(int n, double a[], double x);

int main()
{
    int n, i;
    double a[MAXN], x;

    scanf("%d %lf", &n, &x);
    for (i = 0; i <= n; i++)
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}

/* 你的代码将被嵌在这里 */
double f(int n, double a[], double x)
{
    float sum = a[0];
    int i;
    double b = 1.0;
    for (i = 1; i <= n; i++)
    {
        b *= x;
        sum += a[i] * b;
    }
    return sum;
}