#include <stdio.h>
char ch='A';
int main(){
    for(int i=0;i<6;i++){
        for(int j=0;j<i+1;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}