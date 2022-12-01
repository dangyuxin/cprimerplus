#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
    
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* 你的代码将被嵌在这里 */
int IsTheNumber ( const int N ){
    int a=0;int b=0;
    int c[10];
    int i,j,h;
    int n=N;
    if(pow((int)sqrt(N),2)==N)
    a=1;
    for(i=0;n>0;i++){
        c[i]=n%10;
        n/=10;
    }
    for(j=0;j<i-1;j++){
        for(h=0;h<i-1;h++){
            if(c[j]==c[h]&&j!=h){
                b=1;
                break;
            }
            if(b==1)
            break;
        }
    }
    if(a==1&&b==1)
    return 1;
    return 0;
}