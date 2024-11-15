#pragma once
#include <iostream>
using namespace std;

class Person {
private:
    int age;
    string name;
    int freeHands = 0;
    int energyLvl;
    int hungryLvl;



public:

//________________________Constructors__________________________
    // явный конструктор без параметров
    Person() : Person(28, "Maxim", 100) {
        cout << "Construct was called" << "\n";
    }

    Person(int age) : Person(age, "Unknow", 0) {
        cout << "Second construct was callde" << "\n";
        setAge(age);
    }

    Person(int age, string name, int energyLvl) {
        cout << "Third(Main) construct was callde" << "\n";
        this->age = age;
        this->name = name;
        this->energyLvl = energyLvl;
    }

//_________________________________________ Getters _______________________

    int getAge();

    string getName();

    int getFreeHands();

    int getEnergyLvl();

    int getHungryLvl();

//______________________________________ Setters _______________________________

    void setAge(int);

    void setName(string);

    void setFreeHands(int);

    void setEnergyLvl(int);

    void setHungryLvl(int);

//__________________________________________ Methodes ____________________________________

    void work(int);

    void read();

    void write();

    void eat();

    void display() const;
};

