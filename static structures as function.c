#include<stdio.h>
#include<string.h>

struct Books
{
    char title[50];
    char author[50];
    int book_id;
};

void printBook(struct Books book)
{
    printf("book_title \t%s\n",book.title);
    printf("book_author \t%s\n",book.author);
    printf("book_id \t%d\n\n",book.book_id);
}

int main()
{
    struct Books
    //two ways to store values in structures
                book1={"kjsk","wsf",0665654}, book2={"nhjby","iuiub",154899}, book3, book4;

    strcpy(book3.title,"abc");
    strcpy(book3.author,"sdos");
    book3.book_id=1323484;

    strcpy(book4.title,"lmsv");
    strcpy(book4.author,"kjasdk");
    book4.book_id=2655959;

    printf("book1\n");
    printBook(book1);
    printf("book2\n");
    printBook(book2);
    printf("book3\n");
    printBook(book3);
    printf("book4\n");
    printBook(book4);

    printf("size of structure is %d\n",sizeof(struct Books));
    printf("size of book1 is %d\n",sizeof(book1));
    printf("size of book2 is %d\n",sizeof(book2));
    printf("size of book3 is %d\n",sizeof(book3));
    printf("size of book4 is %d\n",sizeof(book4));
}
