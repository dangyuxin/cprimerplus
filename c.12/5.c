#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[100];
    int i;
    for (i = 0; i < 100;i++){
        a[i] = rand() % 10 +1;
    }
    for (i = 0; i < 100;i++){
        for (int j = 0; j < 99 - i;j++)
        {
            if(a[j]<a[j+1])
            {
            int t = a[j];
            a[j] = a[j + 1];
            a[j + 1] = t;
            }
        }
    }
    for (i = 0; i < 100;i++){
        printf("%d,",a[i]);
    }
    return 0;
}