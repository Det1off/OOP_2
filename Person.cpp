#include "Person.h"

//_________________________________________ Getters _______________________

int Person:: getAge() {
    return age;
}

string Person::getName() {
    return name;
}

int Person::getFreeHands() {
    return freeHands;
}

int Person::getEnergyLvl() {
    return energyLvl;
}

int Person::getHungryLvl() {
    return hungryLvl;
}

//______________________________________ Setters _______________________________

void Person::setAge(int age) {
    this->age = age;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setFreeHands(int freeHands) {
    this->freeHands = freeHands;
}

void Person::setEnergyLvl(int energyLvl) {
    this->energyLvl = energyLvl;
}

void Person::setHungryLvl(int hungryLvl) {
    this->hungryLvl = hungryLvl;
}

//__________________________________________ Methodes ____________________________________

void Person::work(int currentEnergy) {
    energyLvl = currentEnergy;
    if (currentEnergy >= 20) {
        cout << "Work in progress...." << "\n";
    }
    else {
        cout << "You too tired for work" << "\n";
    }

}

void Person::read() {
    
}

void Person::write() {
    
}

void Person::eat() {
    
}

void Person::display () const {
    cout << "Age: " << age << ", Name: " << name << ", Energy Level: " << energyLvl << "\n";
}

