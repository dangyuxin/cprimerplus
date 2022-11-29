#include <stdio.h>
double min(double x,double y);
int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%g",min(a,b));
    return 0;
}
double min(double x,double y){
    return x<y?x:y;
}