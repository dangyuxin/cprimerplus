#include <stdio.h>
int main(){
    int friend=5;
    int week=1;
    for(int i=0;;i++){
        friend=(friend-week)*2;
        week++;
            if(friend>140)
            break;
    }
    printf("%d\n%d",week,friend);
}