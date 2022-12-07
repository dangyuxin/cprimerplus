#include <stdio.h>
struct student
{
    char xh[10];
    char xing[10];
    int yuwen;
    int shuxue;
    int yingyu;
};
int main(){
    int n;
    scanf("%d", &n);
    struct student date[n];
    int t=0;
    int max = -1;
    for (int i = 0; i < n;i++){
        scanf("%s%s%d%d%d", date[i].xh, date[i].xing, &date[i].yuwen, &date[i].shuxue, &date[i].yingyu);
        if (max < date[i].yuwen + date[i].shuxue + date[i].yingyu){
            max = date[i].yuwen + date[i].shuxue + date[i].yingyu;
            t = i;
        }
    }
    printf("%s %s %d\n", date[t].xing, date[t].xh, date[t].yuwen + date[t].shuxue + date[t].yingyu);
}