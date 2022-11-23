#include <stdio.h>
int main(){
    char a[26];
    int i;
    char p='a';
    for(i=0;i<26;i++){
        a[i]=p;
        p++;
    }

    for(i=0;i<26;i++)
    printf("%c,",a[i]);
}