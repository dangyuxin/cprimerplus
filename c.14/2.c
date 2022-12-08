#include <stdio.h>
struct date{
    int year;
    int month;
    int day;
};
int f(int x, int y, int z);
int main()
{
    struct date a;
    scanf("%d%d%d", &a.year, &a.month, &a.day);
    f(a.year, a.month, a.day);
    return 0;
}
int f(int x,int y,int z)
{
    int sum;
    switch (y)
    {
    case 2:
        sum = 31;
        break;
    case 3:
        sum = 59;
        break;
    case 4:
        sum = 90;
        break;
    case 5:
        sum = 120;
        break;
    case 6:
        sum = 151;
        break;
    case 7:
        sum = 181;
        break;
    case 8:
        sum = 212;
        break;
    case 9:
        sum = 243;
        break;
    case 10:
        sum = 273;
        break;
    case 11:
        sum = 304;
        break;
    case 12:
        sum = 334;
        break;
    }
    if ((y > 2) && ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0))
        printf("%d", sum + z + 1);
    else
        printf("%d", sum + z);
    return 0;
}
