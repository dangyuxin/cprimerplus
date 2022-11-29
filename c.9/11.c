#include <stdio.h>
int F(int x);
int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",F(a));
    return 0;
}
int F(int x){
    if(x==1||x==2)
    return 1;
    return F(x-1)+F(x-2);

}