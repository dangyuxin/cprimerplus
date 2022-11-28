#include <stdio.h>

void CharPyramid(int n, char ch);

int main()
{
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);

    return 0;
}

/* 请在这里填写答案 */
void CharPyramid(int n, char ch)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n - i; j++)
            printf(" ");
        for (j = 0; j < i + 1; j++)
            printf("%c ", ch);
        if (i < n - 1)
            printf("\n");
    }
}