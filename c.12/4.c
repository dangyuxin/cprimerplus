#include <stdio.h>
int test(){
    static int a = 0;
    a++;
    return a;
}
int main(){
    printf("你要调用几次test函数？\n");
    int x;
    scanf("%d", &x);
    int count;
    for (int i = 0; i < x;i++){
       count = test();
    }
    printf("\n%d",count);
    return 0;
}