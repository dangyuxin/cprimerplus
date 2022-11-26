#include <stdio.h>
int main(){
    char ch;
    int count =0;
    while(scanf("%c",&ch)!=EOF){
        count++;
    }
    printf("%d",count);
}