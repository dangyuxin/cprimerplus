#include <stdio.h>
#include <string.h>

int main(void)
{
    int len = 0;
    char name[20];

    printf("Please enter your name:");
    scanf("%19s", name);
    len = strlen(name);
    printf("Print your name:\n");
    printf("a.\"%s\"\n", name);
    printf("b.\"%20s\"\n", name);
    printf("c.\"%-20s\"\n", name);
    printf("d.%*s\n", len + 3, name);

    return 0;
}
