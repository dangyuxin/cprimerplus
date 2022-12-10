#include <stdio.h>
#include <stdlib.h>
int main(){
    int ch, count;
    FILE *fp;
    char filename[100];
    printf("请输入文件名：\n");
    scanf("%s", filename);
    if((fp=fopen(filename,"r"))==NULL){
        printf("can't open %s", filename);
        exit(EXIT_FAILURE);
    }
    while(ch=getc(fp)!=EOF){
        fputc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("文件%s有%d个字符", filename, count);
    return 0;
}