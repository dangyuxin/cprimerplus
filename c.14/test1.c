#include <stdio.h>
struct student
{
    char xh[10];
    char xing[10];
    int grades;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct student date[n];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d", date[i].xh, date[i].xing, &date[i].grades);
        sum += date[i].grades;
    }
    printf("%.2f\n", sum/n);
    for (int i = 0; i < n;i++){
        if(date[i].grades<sum/n)
            printf("%s %s\n", date[i].xing, date[i].xh);
    }
}