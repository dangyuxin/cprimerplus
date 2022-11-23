#include <stdio.h>
#define N 8

int main(void)
{
    int a[N], i;
    int val = 2;

    for (i = 0; i < N; i++)
    {
        a[i] = val;
        val *= 2;
    }
    i = 0;
     do
    {
        printf("%d ", a[i++]);
    } while (i < N);
    printf("\nDone.\n");

    return 0;
}
