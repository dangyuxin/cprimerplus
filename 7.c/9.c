#include <stdio.h>
int main(){
    int a;
    int j;
    while(scanf("%d",&a)==1&&a>0){
    for(int i=3;i<=a;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i)
        printf("%d,",i);
    }
}
}