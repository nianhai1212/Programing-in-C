#include <stdio.h>
#include <string.h>

struct Book {
	char name[20];
	unsigned int price;
};

typedef struct Bookredefine {
	char name[20];
	unsigned price;
} st_book;

void printBookInfo (st_book book) {
	printf("name:\t%s\n",book.name);
	printf("name:\t$%d\n",book.price);
}

void printBookInfo_pt (st_book* book) {
	printf("name:\t%s\n",book->name);
	printf("name:\t$%d\n",book->price);
}

int main()
{
	struct Book b1 = {"C programing",55};
	st_book b2 = {"Python programing",55};

	printf("name:\t%s\nprice:\t$%d\n",b1.name,b1.price);

	strcpy(b1.name,"C++ programing");
	b1.price = 66;

	printf("name:\t%s\nprice:\t$%d\n",b1.name,b1.price);

	struct Book* pb = &b1;
	printf("name:\t%s\n",(*pb).name);
	printf("name:\t$%d\n",(*pb).price);

	struct Book* ps = &b1;
	printf("name:\t%s\n",ps->name);
	printf("name:\t$%d\n",ps->price);

	printBookInfo(b2);
	printBookInfo_pt(&b2);

	return 0;
}
