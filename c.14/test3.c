#include <stdio.h>
struct student
{
    char xm[15];
    char sr[20];
    char ch;
    char sj[20];
    char nsj[20];
};
int main()
{
    int n;
    scanf("%d", &n);
    struct student date[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %c %s %s", date[i].xm, date[i].sr, &date[i].ch, date[i].sj, date[i].nsj);
    }
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x;
        scanf("%d", &x);
        if (x >= 0 && x <= n - 1)
            printf("%s %s %s %c %s", date[x].xm, date[x].sj, date[x].nsj, date[x].ch, date[x].sr);
        else
            printf("Not Found");
        if (i < t - 1)
            printf("\n");
    }
}