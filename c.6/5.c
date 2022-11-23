#include <stdio.h>
int main()
{
    int i, j;
    char ch;
    scanf("%c", &ch);
    int length = ch - 'A';
    for (i = 0; i <= length; i++)
    {
        char t = 'A' ;
        for (j = 0; j < length - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c", t++);
        }
        for (j = 0; j < i; j++)
        {
            printf("%c", t--);
        }
        printf("\n");
    }

    return 0;
}
