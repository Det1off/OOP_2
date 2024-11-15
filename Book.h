#pragma once
#include <iostream>
using namespace std;


class Book {
private:
    string title;
    string author;
    int pages;
    string genre;
    int currentPage;



public:

    //________________________Constructors__________________________
    // явный конструктор без параметров
    Book() : Book(35, "Sony", 11) {
        cout << "Construct was called" << "\n";
    }

    Book(int pages) : Book(pages, "Unknow", 0) {
        cout << "Second construct was callde" << "\n";
    }

    Book(int pages, string author, int currentPage) {
        cout << "Third(Main) construct was callde" << "\n";
        this->pages = pages;
        this->author = author;
        this->currentPage = currentPage;
    }

    //_________________________________________ Getters _______________________

    string getTitle();

    int getPages();

    string getGenre();

    int getCurrentPage();

    string getAuthor();

    //______________________________________ Setters _______________________________

    void setTitle(string);

    void setPages(int);

    void setGenre(string);

    void setCurrentPage(int);

    void setAuthor(string);



    //__________________________________________ Methodes ____________________________________

    void open();

    void close();

    void turnPage(int);

    void read();

    void bookmark();

    void display() const;

};
