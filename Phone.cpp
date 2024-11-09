#include "Phone.h"

//_________________________________________ Getters _______________________

string Phone::getModel() {
    return model;
}

string Phone::getOS() {
    return OS;
}

string Phone::getMaterial() {
    return material;
}

int Phone::getBatteryLvl() {
    return batteryLvl;
}

string Phone::getColor() {
    return color;
}


//______________________________________ Setters _______________________________

void Phone::setModel(string newModel) {
    model = newModel;
}

void Phone::setOS(string newOS) {
    OS = newOS;
}

void Phone::setMaterial(string newMaterial) {
    material = newMaterial;
}

void Phone::setBatteryLvl(int newbatteryLvl) {
    batteryLvl = newbatteryLvl;
}

void Phone::setColor(string newColor) {
    color = newColor;
}



//__________________________________________ Methodes ____________________________________

void Phone::turnOn() {
    isOn = true;
}

void Phone::turnOff() {
    isOn = false;
}

void Phone::call(string number) {
    cout << "Calling " << number << "..." << "\n";
}

void Phone::charge(int amount) {
    batteryLvl += amount;
}

void Phone::checkBattery() {
    cout << "Battery level: " << batteryLvl << "%" << "\n";
}