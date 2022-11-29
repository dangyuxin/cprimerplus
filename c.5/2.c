#include <stdio.h>

int main(void)
{
    int n, sum, count;
    sum = 0;

    printf("Enter the number of days you work: ");
    scanf("%d", &count);
    n = count;
    while (count > 0)
    {
        sum += count;
        count--;
    }
    printf("You earned $%d in %d days.\n", sum, n);

    return 0;
}
