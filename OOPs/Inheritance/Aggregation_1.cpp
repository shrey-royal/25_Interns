#include <iostream>
using namespace std;

class Book {
    int isbn;
    string name;
    string author;
    int pages;

public:
    Book() {}
    Book(int isbn, string name, string author, int pages) {
        this->isbn = isbn;
        this->name = name;
        this->author = author;
        this->pages = pages;
    }

    void getBookDeatils() {
        cout << "Book(isbn=" << isbn << ", name=" << name << ", author=" << author << ", pages=" << pages << ")\n";
    }
};

class Library {
    string name;
    Book books[100];
    int totalBooks;

public:
    Library(string name) {
        this->name = name;
        totalBooks = 0;
    }

    void addBook(int isbn, string name, string author, int pages) {
        Book b(isbn, name, author, pages);
        if (totalBooks < 100) {
            books[totalBooks++] = b;
            cout << "New Book added!\n";
        }else {
            cout << "Can't add more books, library is at it's limit!";
        }
    }

    void getAllBooks() {
        cout << "\nBooks of " << name << ": \n";
        for (int i = 0; i < totalBooks; i++) {
            books[i].getBookDeatils();
        }
        cout << endl;
    }
};

int main() {
    Library library("Laxmi Library");

    library.addBook(1232, "Hari Putter Vol. 1", "Kenil Parmar", 420);
    library.addBook(8878, "Hari Putter Vol. 2", "Kenil Parmar", 200);

    library.getAllBooks();

    return 0;
}