#include <stdio.h>
struct mem{
    char name[20];
    char mid[20];
    char last[20];
};
struct date{
    char num[20];
    struct mem x;
};
int main(){
    struct date a[5];
    
    return 0;
}