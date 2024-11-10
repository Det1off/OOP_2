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

void Person::setAge(int newAge) {
    age = newAge;
}

void Person::setName(string newName) {
    name = newName;
}

void Person::setFreeHands(int newFreeHands) {
    freeHands = newFreeHands;
}

void Person::setEnergyLvl(int newEnergyLvl) {
    energyLvl = newEnergyLvl;
}

void Person::setHungryLvl(int newHungryLvl) {
    hungryLvl = newHungryLvl;
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

void Person::speak() {
    
}