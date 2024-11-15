#include "Kettle.h"

//_________________________________________ Getters _______________________

string Kettle::getBrand() {
    return this->brand;
}

double Kettle::getCapacity() {
    return this->capacity;
}

string Kettle::getMaterial() {
    return this->material;
}

int Kettle::getTemperature() {
    return this->temperature;
}

string Kettle::getColor() {
    return this->color;
}

string Kettle::getIsWorking() {
    return this->isWorking;
}

//______________________________________ Setters _______________________________


void Kettle::setBrand(string newBrand) {
    brand = newBrand;
}

void Kettle::setCapacity(double newCapacity) {
    capacity = newCapacity;
}

void Kettle::setMaterial(string newMaterial) {
    material = newMaterial;
}

void Kettle::setTemperature(int newTemperature) {
    temperature = newTemperature;
}

void Kettle::setColor(string newColor) {
    color = newColor;
}

void Kettle::setIsWorking(string newIsWork) {
    isWorking = newIsWork;
}



//__________________________________________ Methodes ____________________________________

void Kettle::turnOnOff(string IfWork,Person& freeHand) {
    if (IfWork == "No"){
        if (freeHand.getFreeHands() > 0) {
            cout << "You turned on the kettle" << "\n";
        }
        else if (freeHand.getFreeHands() <= 0) {
            cout << "Your hands are busy" << "\n";
        }
    }
    else if (IfWork == "Yes") {
        if (freeHand.getFreeHands() > 0) {
            cout << "You turned off the kettle" << "\n";
        }
        else if (freeHand.getFreeHands() <= 0) {
            cout << "Your hands are busy" << "\n";
        }
        else {
            cout << "Enter (Yes/No) in \"string getIsWorking\" " << "\n";
        }
    }
}


void Kettle::Temperature(int temp) {
    temperature = temp;
}

void Kettle::pourWater(double amount) {
    capacity -= amount;
}

void Kettle::refillWater(double amount) {
    capacity += amount;
}

void Kettle::display() const {
    cout << "Age: " << temperature << ", Name: " << color << ", Energy Level: " << brand << "\n";
}
