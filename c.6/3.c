#include <stdio.h>
int main(){
    char a[6]={'F','E','D','C','B','A'};
    for(int i=0;i<6;i++){
        int x=0;
        for(int j=0;j<i+1;j++){
            printf("%c",a[x++]);
        }
        printf("\n");
    }

}