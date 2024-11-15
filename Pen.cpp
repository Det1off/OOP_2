#include "Pen.h"

//_________________________________________ Getters _______________________

string Pen:: getColor() {
    return color;
}

double Pen::getInkLvl() {
    return inkLvl;
}

string Pen::getType() {
    return type;
}

string Pen::getMaterial() {
    return material;
}

string Pen::getBrand() {
    return brand;
}


//______________________________________ Setters _______________________________

void Pen::setColor(string newColor) {
    color = newColor;
}

void Pen::setInkLvl(double newInkLvl) {
    inkLvl = newInkLvl;
}

void Pen::setType(string newType) {
    type = newType;
}

void Pen::setMaterial(string newMaterial) {
    material = newMaterial;
}

void Pen::setBrand(string newBrand) {
    brand = newBrand;
}


//__________________________________________ Methodes ____________________________________
void Pen::cap() {
    isCapped = true;
}

void Pen::uncap() {
    isCapped = false;
}

void Pen::write() {
    cout << "Writing with pen..." << "\n"; inkLvl -= 0.1;
}

void Pen::refill(double amount) {
    inkLvl += amount;
}

void Pen::checkInkLevel() {
    cout << "Ink level: " << inkLvl << "\n";
}

void Pen::display() const {
    cout << "Age: " << material << ", Name: " << type << ", Energy Level: " << brand << "\n";
}