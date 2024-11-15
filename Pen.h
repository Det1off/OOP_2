#pragma once
#include <iostream>
using namespace std;

class Pen {
private:
    string color;
    double inkLvl;
    string type;
    string material;
    bool isCapped;
    string brand;




public:

    //________________________Constructors__________________________
    // явный конструктор без параметров
    Pen() : Pen("Metal", "Automatic", "Penny") {
        cout << "Construct was called" << "\n";
    }

    Pen(string material) : Pen(material, "Unknow", "Unknow") {
        cout << "Second construct was callde" << "\n";
    }

    Pen(string material, string type, string brand) {
        cout << "Third(Main) construct was callde" << "\n";
        this->material = material;
        this->type = type;
        this->brand = brand;
    }

//_________________________________________ Getters _______________________

    string getColor();

    double getInkLvl();

    string getType();

    string getMaterial();

    string getBrand();


//______________________________________ Setters _______________________________

    void setColor(string);

    void setInkLvl(double);

    void setType(string);

    void setMaterial(string);

    void setBrand(string);


//__________________________________________ Methodes ____________________________________
    void cap();

    void uncap();

    void write();

    void refill(double);

    void checkInkLevel();

    void display() const;
};

