#include <stdio.h>
int main(){
    int y,n;
    scanf("%d%d",&y,&n);
    int i=0;
    while(n==4){
    int a=y/1000;
    int b=y/100%10;
    int c=y/10%10;
    int d=y%10;
        if(a!=b && a!=c && a!=d && b!=c &&b!=d && c!=d){
            printf("%d %04d",i,y);
            break;
        }
        y++;
        i++;

    }
     while(n==3){
    int a=y/1000;
    int b=y/100%10;
    int c=y/10%10;
    int d=y%10;
        if((a!=b&&a!=c&&a!=d)||(a!=c&&a!=d&&b!=c)||(a!=c&&a!=d&&b!=d)||(a!=c&&a!=d&&c!=d)){
            printf("%d %04d",i,y);
            break;
        }
        y++;
        i++;

    }
     while(n==2){
    int a=y/1000;
    int b=y/100%10;
    int c=y/10%10;
    int d=y%10;
        if(a!=b || a!=c || a!=d || b!=c || b!=d || c!=d){
            printf("%d %04d",i,y);
            break;
        }
        y++;
        i++;

    }
    


}