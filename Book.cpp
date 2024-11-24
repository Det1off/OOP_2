#include "Book.h"

//Оператор перегрузки
bool operator>(const Book& lhs, const Book& rhs) {
    return lhs.pageCount > rhs.pageCount;
}

bool operator<(const Book& lhs, const Book& rhs) {
    return lhs.pageCount < rhs.pageCount;
}

bool operator==(const Book& lhs, const Book& rhs) {
    return lhs.title == rhs.title && lhs.author == rhs.author && lhs.pageCount == rhs.pageCount;
}

bool operator!=(const Book& lhs, const Book& rhs) {
    return !(lhs == rhs);
}

ostream& operator<<(ostream& out, const Book& obj) {
    out << "Book [Title: " << obj.title << ", Author: " << obj.author
        << ", Pages: " << obj.pageCount << ", Year Published: " << obj.yearPublished << "]";
    return out;
}

istream& operator>>(istream& in, Book& obj) {
    cout << "Enter book title: ";
    in.ignore(); // Игнорируем перенос строки
    getline(in, obj.title);

    cout << "Enter book author: ";
    getline(in, obj.author);

    cout << "Enter page count: ";
    in >> obj.pageCount;

    cout << "Enter year published: ";
    in >> obj.yearPublished;

    return in;
}


//________________________Constructors__________________________
// Явный конструктор без параметров
Book::Book() : Book(35, "Sony", 11) {
    cout << "Construct was called Book" << this << "\n";
}

Book::Book(int pages) : Book(pages, "Unknow", 0) {
    cout << "Second construct was callde Book" << this << "\n";
}

Book::Book(int pages, const char* author, int currentPage) {

    this->pages = pages;
    this->author = new char[strlen(author) + 1];
    strcpy_s(this->author, strlen(author) + 1, author);
    this->currentPage = currentPage;

    cout << "Third(Main) construct was called Book" << this << "\n";

}


Book::Book(const Book& other) {
    pages = other.pages;
    author = new char[strlen(other.author) + 1];
    strcpy_s(author, strlen(other.author) + 1, other.author);
    currentPage = other.currentPage;
    cout << "Конструктор был вызван Book" << this << "\n";
}

Book::~Book() {
    delete[] author;
    cout << "Деструктор вызван. Освобождение памяти для имени Book" << this << "\n";
}

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

const char* Book::getAuthor() {
    return author;
}

//______________________________________ Setters _______________________________

void Book::setTitle(string title) {
    this->title = title;
}

void Book::setPages(int pages) {
    this->pages = pages;
}

void Book::setGenre(string genre) {
    this->genre = genre;
}

void Book::setCurrentPage(int currentPage) {
    this->currentPage = currentPage;
}

void Book::setAuthor(const char* author) {
    delete[] this->author; // Удаляем старую строку
    this->author = new char[strlen(author) + 1];
    strcpy_s(this->author, strlen(author) + 1, author);
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

void Book::display() const {
    cout << "Age: " << pages << ", Name: " << author << ", Energy Level: " << currentPage << "\n";
}