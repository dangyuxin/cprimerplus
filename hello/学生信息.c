#include <stdio.h>
struct student {
    char name[40];
    char sex[5];
    int age;
};
void input(struct student *date){
    printf("姓名：\n");
    scanf("%s", date->name);
    printf("性别：\n");
    scanf("%s", date->sex);
    printf("年龄：\n");
    scanf("%d", &date->age);
}
void output(struct student *date){
    printf("%s\n", date->name);
    printf("%s\n", date->sex);
    printf("%d\n", date->age);
}
int main(){
    struct student date[5];
    struct student *p = &date;
    for (int i = 0; i < 5;i++){
        printf("这是你第%d次输入学生信息\n", i + 1);
        input(p);
        printf("输入完毕，本次输出结果：\n");
        output(p);
        p++;
    }
    printf("\n结果录入完毕，这是你录入的信息：\n");
    for (int i = 0; i < 5;i++){
        printf("%s,%s,%d\n", date[i].name, date[i].sex, date[i].age);
    }
}