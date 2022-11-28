#include <stdio.h>
char *match(char *s, char ch);

int main(void)
{
    char ch, str[80], *p = NULL;

    scanf("%s", str);
    getchar();          /* 跳过输入字符串和输入字符之间的分隔符 */
    ch = getchar();     /* 输入一个字符 */
    p = match(str, ch); /* 调用函数match() */
    if (p != NULL)
    { /* 找到字符ch */
        printf("%s\n", p);
    }
    else
    {
        printf("Not Found.\n");
    }

    return 0;
}

/* 请在这里填写答案 */
char *match(char *s, char ch)
{
    int i;
    int m;
    int flag = 0;
    for (i = 0; *(s + i) != '\0'; i++)
    {
        if (*(s + i) == ch)
        {
            m = i;
            flag = 1;
        }
    }
    if (flag)
        return (s + m);
    if (flag == 0)
        return NULL;
}