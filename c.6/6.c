#include <stdio.h>

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++){
        printf("%-4d%-4d%-4d",i,i*i,i*i*i);
        printf("\n");
    }

    return 0;
}
