#include <stdio.h>
#include <stdlib.h>
struct Book{
    char title[100];
    char author[50];
    struct Book *next;
};
void put(struct Book *library){
    struct Book *book;
    int count=1;
    book=library;
    while(book!=NULL){
        printf("Book%d\n",count);
        printf("书名：%s\n",book->title);
        printf("作者：%s\n",book->author);
        book=book->next;
        count++;
    }
}
void release(struct Book **library){
    struct Book *a;
    while(library!=NULL){
        a = *library;
        *library=(*library)->next;
        free(a);
    }
}
void getinput(struct Book *book){
    printf("请输入书名\n");
    scanf("%s",book->title);
    printf("请输入作者\n");
    scanf("%s",book->author);

}
void  addBook(struct Book **library){
    struct Book *book,*temp;
    book=(struct Book *)malloc(sizeof(struct Book));
    if(book==NULL){
        printf("内存分配失败\n");
        exit(1);
    }
    else
    getinput(book);
    if(book!=NULL){
            temp=*library;
            *library=book;
            book->next=temp;
    }
    else{
        *library=book;
        book->next=NULL;
    }
}
int main(){
    struct Book *library=NULL;
    int ch;
    while(1){
        printf("是否需要录入书籍信息？ Y/N");
        do{
            ch=getchar();
        }while(ch!='Y'&& ch!='N');
        if(ch=='Y')
        addBook(&library);
        else
        break;
    }
    printf("请问是否需要打印图书信息？ Y/N");
    do{
            ch=getchar();
        }while(ch!='Y'&& ch!='N');
        if(ch=='Y')
        put(library);
        release(&library);
    
    return 0;
}