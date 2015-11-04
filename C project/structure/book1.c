#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50] ;
	char subject[100] ;
	int book_id;
};


//function declaration
void printBook(struct Books book);
void printBook2(struct Books * book);


int main(int argc, char const *argv[])
{
	/* code */

	struct Books book1;

	struct Books book2;

	strcpy(book1.title , "C Programming");
	strcpy(book1.author , "Nuha Ali");
	strcpy(book1.subject , "C Programming Tutorial");
	book1.book_id = 1502609;

	 /* book 2 specification */
   strcpy( book2.title, "Telecom Billing");
   strcpy( book2.author, "Zara Ali");
   strcpy( book2.subject, "Telecom Billing Tutorial");
   book2.book_id = 6495700;

    printf("address : %x\n", &book1);
    printBook(book1);
	printf( "Book  book_id : %d\n", book1.book_id);

	printf("address : %x\n", &book2);
	printBook2(&book2);
	printf( "Book  book_id : %d\n", book2.book_id);
    /* print Book1 info */
  

   //printf("Book1 title : %s\n", book1.title);

   /* print Book2 info */
//   printf( "Book 2 title : %s\n", book2.title);
//   printf( "Book 2 author : %s\n", book2.author);
//   printf( "Book 2 subject : %s\n", book2.subject);
//   printf( "Book 2 book_id : %d\n", book2.book_id);





	return 0;
}

void printBook(struct Books book)
{
	printf("address : %x\n", &book);
	printf( "Book  title : %s\n", book.title);
	printf( "Book  author : %s\n", book.author);
	printf( "Book  subject : %s\n", book.subject);
	book.book_id = 111;
	printf( "Book  book_id : %d\n", book.book_id);

}

void printBook2(struct Books * book)
{
	printf("address : %x\n", book);
	printf( "Book  title : %s\n", book->title);
	printf( "Book  author : %s\n", book->author);
	printf( "Book  subject : %s\n", book->subject);
	book->book_id = 222;
	printf( "Book  book_id : %d\n", book->book_id);

}