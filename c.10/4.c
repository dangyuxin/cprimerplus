#include <stdio.h>
int F(double x[]){
    int t;
    int max=x[0];
    for(int i=1;i<4;i++){
    if(max<x[i]){
        max=x[i];
        t=i;
    }
    }
    return t;
}
int main(){
    double c[]={13,5,8,21};
    printf("%d\n",F(c));
}