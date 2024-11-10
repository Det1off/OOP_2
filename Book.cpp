#include "Book.h"


//_________________________________________ Getters _______________________

string Book::getTitle() {
    return title;
}

int Book::getPages() {
    return pages;
}

string Book::getGenre() {
    return genre;
}

int Book::getCurrentPage() {
    return currentPage;
}

string Book::getAuthor() {
    return author;
}

//______________________________________ Setters _______________________________

void Book::setTitle(string newTitle) {
    title = newTitle;
}

void Book::setPages(int newPages) {
    pages = newPages;
}

void Book::setGenre(string newGenre) {
    genre = newGenre;
}

void Book::setCurrentPage(int newCurrentPage) {
    currentPage = newCurrentPage;
}

void Book::setAuthor(string newAuthor) {
    author = newAuthor;
}



//__________________________________________ Methodes ____________________________________

void Book::open() {
    cout << "Opening book..." << "\n";
}

void Book::close() {
    cout << "Closing book..." << "\n";
}

void Book::turnPage(int pageNum) {
    currentPage = pageNum;
}

void Book::read() {
    cout << "Reading page " << currentPage << "..." << "\n";
}

void Book::bookmark() {
    cout << "Bookmarking page " << currentPage << "\n";
}
