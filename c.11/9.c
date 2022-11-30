#include <stdio.h>
void f( char *p ){
    char ch;
    int i=0,j,t=0;
    while(p[i]!='\0'){
        i++;
        j=i-1;
    }
    while(t<j){
        ch=p[t];
        p[t]=p[j];
        p[j]=ch;
        t++;
        j--;
    
    }
}
int main(){
    char s[]="i love linux";
    f(s);
    puts(s);
}