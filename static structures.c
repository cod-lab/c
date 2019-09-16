#include<stdio.h>
//#include<string.h>
#include<conio.h>

struct Books
{
    char title[50];
    char author[50];
    int book_id;
};

int main()
{
    struct Books book1, book2;

    // book1
    strcpy(book1.title,"abc");
    strcpy(book1.author,"me");
    book1.book_id=1656468;

    // book2
    strcpy(book2.title,"efg");
    strcpy(book2.author,"iodd");
    book2.book_id=2564897;

    // print book1
    printf("book1-title \t%s\n",book1.title);
    printf("book1-author \t%s\n",book1.author);
    printf("book1-book_id \t%d\n",book1.book_id);

    printf("\n");

    // print book2
    printf("book2-title \t%s\n",book2.title);
    printf("book2-author \t%s\n",book2.author);
    printf("book2-book_id \t%d\n",book2.book_id);

    //return 0;
}
