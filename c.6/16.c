#include <stdio.h>
int main(){
    int da=100; double de=100;
    int count=1;
    da+=10;
    de*=1.05;
    while(da>=de){
        da+=10;
        de*=1.05;
        count++;
    }
    printf("year:%d",count);
    printf("\n%d,%.2f",da,de);
}