// a menu driven program that depicts the working of a library.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// structure creation
struct lib
{
    int a_n;          // accession number
    char title[100];  // title of the book
    char author[100]; // author name
    float price;      // price of the book
    int flag;         // flag-indicating whether the book is issued or not.
};

// main body
int main()
{

    struct lib Book[100]; // arrays of structure objects
    int i = 0;
    int ac_num;
    int choice = 0;
    int count = 0;
    char ath_nm[100], bk_nm[100];
    // user choices
    printf("---------------------------------------------------");
    printf("1. Add book information\n");
    printf("2. Display book information\n");
    printf("3. List all books of given author\n");
    printf("4. List the title of specified book\n");
    printf("5. List the count of books in the library\n");
    printf("6. List the books in the order of accession number\n");
    printf("7. Exit\n");
    printf("---------------------------------------------------\n");

    while (choice != 7)
    {
        printf("\nEnter Your Choice:");
        scanf("%d", &choice);
        // switch case
        switch (choice)
        {
        case 1:
            // Add book information
            Book[i].a_n = i + 1;
            Book[i].flag = 1;
            printf("Add Book %d information:\n", Book[i].a_n);

            printf("enter book title: ");
            scanf("%s", Book[i].title);

            printf("enter book author: ");
            scanf("%s", Book[i].author);

            printf("enter book price: ");
            scanf("%f", &Book[i].price);

            i++;
            count++;
            break;

        case 2:
            // Display book information
            for (int j = 0; j < count; j++)
            {
                printf("\nBook %d information:\n", Book[j].a_n);

                printf("-----------------------");

                printf("\nbook title: %s", Book[j].title);

                printf("\nbook author: %s", Book[j].author);

                printf("\nbook price: %f\n", Book[j].price);
            }
            break;

        case 3:
            //  List all books of given author
            printf("\nenter Author name:");
            scanf("%s", ath_nm);
            for (int j = 0; j < count; j++)
            {
                if (strcmp(Book[j].author, ath_nm) == 0)
                {
                    printf("book title: %s\n", Book[j].title);

                    printf("book author: %s\n", Book[j].author);

                    printf("book price: %f\n", Book[j].price);
                }
            }
            break;

        case 4:
            //  List the title of specified book
            printf("enter accession number:");
            scanf("%d", &ac_num);
            for (int j = 0; j < count; j++)
            {
                if (Book[j].a_n == ac_num)
                {
                    printf("\nbook title: %s", Book[j].title);

                    printf("\nbook author: %s", Book[j].author);

                    printf("\nbook price: %f", Book[j].price);
                }
            }
            break;

        case 5:
            // List the count of books in the library
            printf("\ntotal Books are :%d", count);
            break;

        case 6:
            //  List the books in the order of accession number
            for (int i = 0; i < count; i++)
            {
                printf("\nBook %d is %s", Book[i].a_n, Book[i].title);
            }

            break;

        case 7:
            // Exit
            exit(0);
            break;

        default:
            break;
        }
    }
}
