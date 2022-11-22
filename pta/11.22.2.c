#include <stdio.h>
double jc(int n);
double ji(int n);
int main(){
    double eps,P,Pi=0;
    scanf("%le", &eps);
    for(int i=1;;i++){
        P=jc(i-1)/ji(i);
        Pi+=P;
        if(P<eps)
        break;
    }
    printf("PI = %.5lf",Pi*2);
}
double jc(int n){
    double sum1=1.0;
    for(int j=1;j<=n;j++)
    sum1*=j;
    return sum1;
}
double ji(int n){
    double sum2=1.0;
    for(int j=1;j<=n;j++){
        sum2*=2*j-1;
        return sum2;
    }
}