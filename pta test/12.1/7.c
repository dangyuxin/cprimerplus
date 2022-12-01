#include <stdio.h>
long long int jc(int n){
    if(n==0)
    return 1;
    return n*jc(n-1);
}
int main(){
    int a;
    int i=0;
    while(scanf("%d",&a)==1){
        if(i>=1)
            printf("\n");
    printf("%lld",jc(a));
     i++;
    }
    
    return 0;
}