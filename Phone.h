#pragma once
#include <iostream>
#include "Person.h"
using namespace std;


class Phone {
private:
    string number;
    string model;
    string OS;
    int batteryLvl;
    string material;
    bool isOn;
    string color;



public:
    //_________________________________________ Getters _______________________
    string getNumber();

    string getModel();

    string getOS();

    string getMaterial();

    int getBatteryLvl();

    string getColor();


    //______________________________________ Setters _______________________________
    void setNumber(string newNumber);

    void setModel(string newModel);

    void setOS(string newOS);

    void setMaterial(string newMaterial);

    void setBatteryLvl(int newbatteryLvl);

    void setColor(string newColor);



    //__________________________________________ Methodes ____________________________________

    void turnOn();

    void turnOff();

    void call(string number, Person& person);

    void charge(int amount);

    void checkBattery();
};

