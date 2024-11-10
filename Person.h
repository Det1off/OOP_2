#pragma once
#include "Includes.h"

class Person {
private:
    int age;
    string name;
    int freeHands;
    int energyLvl;
    int hungryLvl;



public:
//_________________________________________ Getters _______________________

    int getAge();

    string getName();

    int getFreeHands();

    int getEnergyLvl();

    int getHungryLvl();

//______________________________________ Setters _______________________________

    void setAge(int newAge);

    void setName(string newName);

    void setFreeHands(int newFreeHands);

    void setEnergyLvl(int newEnergyLvl);

    void setHungryLvl(int newHungryLvl);

//__________________________________________ Methodes ____________________________________

    void work(int currentEnergy);

    void read();

    void write();

    void eat();

    void speak();
};

