#include <stdio.h>
int F(int x);
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",F(a));
    return 0;
}
int F(int x){
    int b=1,c=1,t;
    if(x==1||x==2)
    return 1;
    for(int i=2;i<x;i++){
        t=b+c;
        b=c;
        c=t;
    }
    return t;

}