#pragma once
#include "Includes.h"

class Pen {
private:
    string color;
    double inkLvl;
    string type;
    string material;
    bool isCapped;
    string brand;




public:
//_________________________________________ Getters _______________________

    string getColor();

    double getInkLvl();

    string getType();

    string getMaterial();

    string getBrand();


//______________________________________ Setters _______________________________

    void setColor(string newColor);

    void setInkLvl(double newInkLvl);

    void setType(string newType);

    void setMaterial(string newMaterial);

    void setBrand(string newBrand);


//__________________________________________ Methodes ____________________________________
    void cap();

    void uncap();

    void write();

    void refill(double amount);

    void checkInkLevel();
};

