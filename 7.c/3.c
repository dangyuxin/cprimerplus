#include <stdio.h>
int main(){
    int a,b,c;
    int sum1=0,sum2=0;
    while(scanf("%d",&c)==1&&c!=0){
        if(c%2==0){
            a++;
            sum1+=c;
        }
        else{
            b++;
            sum2+=c;
        }
    }
    printf("偶数个数：%d,平均值：%.2f",a,(float)sum1/a);
    printf("奇数个数：%d,平均值：%.2f",a,(float)sum2/a);

}