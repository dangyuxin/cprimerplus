#include <stdio.h>
int F(int *a){
    int max=*a;
    for(int i=1;i<5;i++){
        if(max<*(++a))
        max=*a;
    }
    return max;
}
int main(){
    int a[]={1,2,7,4,5};
    printf("%d\n",F(a));
    return 0;
}