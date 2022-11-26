#include <stdio.h>
int main(){
    printf("如果你单身，输入a\n如果你是户主，输入b\n如果你已婚共有，输入c\n如果你已婚离异，输入d\n");
    printf("先输入你的工资，然后输入你的家庭情况\n");
    char ch;
    int a,tax;
    while(scanf("%d %c",&a,&ch)==2){
        switch(ch){
            case 'a':
            if(a<=17850)
            tax=a*0.15;
            else
            tax=17850*0.15+(a-17850)*0.28;break;
             case 'b':
            if(a<=23900)
            tax=a*0.15;
            else
            tax=23900*0.15+(a-23900)*0.28;break;
            case 'c':
            if(a<=29750)
            tax=a*0.15;
            else
            tax=29750*0.15+(a-29750)*0.28;break;
             case 'd':
            if(a<=14875)
            tax=a*0.15;
            else
            tax=14875*0.15+(a-14875)*0.28;break;

        }
        printf("%d\n",tax);

    }
}