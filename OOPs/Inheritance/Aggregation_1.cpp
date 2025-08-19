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
    Book(string name, string author, int pages) {
        this->name = name;
        this->author = author;
        this->pages = pages;
    }

    int getISBN() {
        return isbn;
    }

    void setISBN(int isbn) {
        this->isbn = isbn;
    }

    string getBookName() {
        return name;
    }

    string getAuthorName() {
        return author;
    }

    void getBookDeatils() {
        cout << "Book(isbn=" << isbn << ", name=" << name << ", author=" << author << ", pages=" << pages << ")\n";
    }
};

class Library {
    string name;
    Book books[100];
    int totalBooks;

    int getBookIndex(int isbn) {
        int bookIndex = -1;
        for (int i = 0; i < totalBooks; i++) {
            if (isbn == books[i].getISBN()) {
                bookIndex = i;
                break; 
            }
        }
        return bookIndex;
    }

public:
    Library(string name) {
        this->name = name;
        totalBooks = 0;
    }

    void addBook(int isbn, string name, string author, int pages) {
        Book b(isbn, name, author, pages);
        if (totalBooks < 100) {
            books[totalBooks++] = b;
            // cout << "New Book added!\n";
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

    void updateBooks(int isbn, Book updatedBookObj) {
        int idx = getBookIndex(isbn);

        if (idx != -1) {
            updatedBookObj.setISBN(isbn);
            books[idx] = updatedBookObj;
            cout << "Book '" << books[idx].getBookName() << "' updated!";
        } else {
            cout << "Book details are wrong!";
        }
    }

    void deleteBook(int isbn) {
        int idx = getBookIndex(isbn);

        if (idx != -1) {
            for (int i = idx; i < totalBooks - 1; i++) {
                books[i] = books[i+1];
            }
            books[--totalBooks] = Book();
            cout << "Book id:" << isbn << " deleted!";
        } else {
            cout << "Book details are wrong!";
        }
    }

    void getBooksByAuthorName(string authorName) {
        bool flag = false;
        cout << "Books from " << authorName << ": \n";
        for (int i = 0; i < totalBooks; i++) {
            if (authorName.compare(books[i].getAuthorName()) == 0) {
                flag = true;
                books[i].getBookDeatils();
            }
        }
        if (!flag) {
            cout << "No books found of author: " << authorName << endl;
        }
    }
};

int main() {
    Library library("Laxmi Library");

    library.addBook(1001, "Hari Putter and the Lassi of Secrets", "Kenil Kalamkathi", 420);
    library.addBook(1002, "Hari Putter and the Chai of Doom", "Kenil Kalamkathi", 390);
    library.addBook(1003, "Chintu Returns to Tuition", "Tapan TikTokwala", 410);
    library.addBook(1004, "Mystery of the Missing Paratha", "Harsh Halvaai", 300);
    library.addBook(1005, "Tiffin Box Chronicles", "Aryan AndaWala", 280);
    library.addBook(1006, "Scooter Ride to Nowhere", "Tapan TikTokwala", 350);
    library.addBook(1007, "Kenil vs The Compiler", "Kenil Kalamkathi", 500);
    library.addBook(1008, "The Ghost of Unit Test", "Harsh Halvaai", 275);
    library.addBook(1009, "Anda Curry Apocalypse", "Aryan AndaWala", 320);
    library.addBook(1010, "Revenge of the Broken Charger", "Tapan TikTokwala", 430);
    library.addBook(1011, "Maggi at Midnight", "Kenil Kalamkathi", 210);
    library.addBook(1012, "The Secret Life of Socks", "Harsh Halvaai", 180);
    library.addBook(1013, "Lost in Local Train", "Aryan AndaWala", 360);
    library.addBook(1014, "Scooty Diaries: Full Tank Drama", "Tapan TikTokwala", 240);
    library.addBook(1015, "404: Love Not Found", "Kenil Kalamkathi", 310);
    library.addBook(1016, "The Day My WiFi Died", "Harsh Halvaai", 280);
    library.addBook(1017, "The Great Anda Heist", "Aryan AndaWala", 330);
    library.addBook(1018, "Chapati Wars: Return of the Rolling Pin", "Tapan TikTokwala", 370);
    library.addBook(1019, "CTRL + ALT + Dil", "Kenil Kalamkathi", 295);
    library.addBook(1020, "Love in the Time of Lag", "Harsh Halvaai", 260);

    library.getAllBooks();

    library.getBooksByAuthorName("Harsh Halvaai");

    return 0;
}