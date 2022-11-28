#include <stdio.h>
double fact(int n);
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%.0f",fact(b)/ fact(a)/ fact(b-a));
}
double fact(int n){
    double sum=1;
   for(int i=1;i<=n;i++){
    sum*=i;
   }
   return sum;
}