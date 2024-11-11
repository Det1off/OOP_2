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
    //_________________________________________ Getters _______________________

    string getTitle();

    int getPages();

    string getGenre();

    int getCurrentPage();

    string getAuthor();

    //______________________________________ Setters _______________________________

    void setTitle(string newTitle);

    void setPages(int newPages);

    void setGenre(string newGenre);

    void setCurrentPage(int newCurrentPage);

    void setAuthor(string newAuthor);



    //__________________________________________ Methodes ____________________________________

    void open();

    void close();

    void turnPage(int pageNum);

    void read();

    void bookmark();

};
