#include "Kettle.h"

//_________________________________________ Getters _______________________

string Kettle::getBrand() {
    return brand;
}

double Kettle::getCapacity() {
    return capacity;
}

string Kettle::getMaterial() {
    return material;
}

int Kettle::getTemperature() {
    return temperature;
}

string Kettle::getColor() {
    return color;
}

//______________________________________ Setters _______________________________

void Kettle::setBrand(string newBrand) {
    brand = newBrand;
}

void Kettle::setCapacity(double newCapacity) {
    capacity = newCapacity;
}

void Kettle::setIsOn(string newMaterial) {
    material = newMaterial;
}

void Kettle::setTemperature(int newTemperature) {
    temperature = newTemperature;
}

void Kettle::setColor(string newColor) {
    color = newColor;
}



//__________________________________________ Methodes ____________________________________

void Kettle::turnOn() {
    isOn = true;
}

void Kettle::turnOff() {
    isOn = false;
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


