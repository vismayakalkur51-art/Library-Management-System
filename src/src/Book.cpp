#include "Book.h"

Book::Book() {
    id = 0;
    title = "";
    author = "";
    available = true;
}

Book::Book(int id, string title, string author) {
    this->id = id;
    this->title = title;
    this->author = author;
    available = true;
}

void Book::setBook(int id, string title, string author) {
    this->id = id;
    this->title = title;
    this->author = author;
}

int Book::getId() const {
    return id;
}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

bool Book::isAvailable() const {
    return available;
}

void Book::issueBook() {
    available = false;
}

void Book::returnBook() {
    available = true;
}

void Book::display() const {
    cout << "Book ID : " << id << endl;
    cout << "Title   : " << title << endl;
    cout << "Author  : " << author << endl;
    cout << "Status  : " << (available ? "Available" : "Issued") << endl;
}
