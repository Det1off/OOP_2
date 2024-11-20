#pragma once
#include <iostream>
#include <cstring>
using namespace std;


class Book {
private:
    string title;
    char* author = nullptr;
    int pages;
    string genre;
    int currentPage;



public:

    //________________________Constructors__________________________
    // явный конструктор без параметров
    Book();

    Book(int pages);

    Book(int pages, const char* author, int currentPage);

 
    Book(const Book& other);

   ~Book() {
        delete[] author;
        cout << "ƒеструктор вызван. ќсвобождение пам€ти дл€ имени Book" << this << "\n";
    }

    //_________________________________________ Getters _______________________

    string getTitle();

    int getPages();

    string getGenre();

    int getCurrentPage();

    const char* getAuthor();

    //______________________________________ Setters _______________________________

    void setTitle(string);

    void setPages(int);

    void setGenre(string);

    void setCurrentPage(int);

    void setAuthor(const char*);



    //__________________________________________ Methodes ____________________________________

    void open();

    void close();

    void turnPage(int);

    void read();

    void bookmark();

    void display() const;

};
