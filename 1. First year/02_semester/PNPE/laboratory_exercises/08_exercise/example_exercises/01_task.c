#include <stdio.h>
#include <string.h>

struct Books {
    char title[40];
    char author[20];
    char topic[30];
    int bookId;
};

void printBook(struct Books book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Topic: %s\n", book.topic);
    printf("Book ID: %d\n", book.bookId);
}

int main() {
    struct Books Book1;

    strcpy(Book1.title, "Title 1");
    strcpy(Book1.author, "Author 1");
    strcpy(Book1.topic, "Topic 1");
    Book1.bookId = 1;

    printBook(Book1);

    return 0;
}