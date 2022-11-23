#include <stdio.h>

int main(void)
{
    int ch;

    printf("Please you enter a ASCII value:");
    scanf("%d", &ch);
    printf("ASCII %d is %c.\n", ch, ch);
    printf("\a");

    return 0;
}
