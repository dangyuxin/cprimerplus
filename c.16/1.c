#include <stdio.h>
#define HMEAN(X, Y) (2.0 * (X) * (Y) / ((X) + (Y)))

int main(void)
{
    double x, y, ans;
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        ans = HMEAN(x, y);
        printf("%g = harmonic mean of %g %g.\n", ans, x, y);
    }
    puts("Done.");

    return 0;
}
