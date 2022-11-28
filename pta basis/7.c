#include <stdio.h>
#include <math.h>

int IsTheNumber(const int N);

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for (i = n1; i <= n2; i++)
    {
        if (IsTheNumber(i))
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* 你的代码将被嵌在这里 */
int IsTheNumber(const int N)
{
    int t = 0, i, j, h;
    int a[10];
    int m = N;
    for (i = 0; m > 0; i++)
    {
        a[i] = m % 10;
        m /= 10;
    }
    if (pow((int)sqrt(N), 2) == N)
        t = 1;
    int y = 0;
    for (j = 0; j < i; j++)
    {
        for (h = 0; h < i; h++)
        {
            if (a[j] == a[h] && j != h)
            {
                y = 1;
                break;
            }
            if (y == 1)
                break;
        }
    }
    if (t == 1 && y == 1)
        return 1;
    return 0;
}
