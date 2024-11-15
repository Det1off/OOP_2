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

    //________________________Constructors__________________________
    // явный конструктор без параметров
    Phone() : Phone(28, "Sony", "Red") {
        cout << "Construct was called" << "\n";
    }

    Phone(int batteryLvl) : Phone(batteryLvl, "Unknow", "Unknow") {
        cout << "Second construct was callde" << "\n";
    }

    Phone(int batteryLvl, string model, string color) {
        cout << "Third(Main) construct was callde" << "\n";
        this->batteryLvl = batteryLvl;
        this->model = model;
        this->color = color;
    }
    //_________________________________________ Getters _______________________
    string getNumber();

    string getModel();

    string getOS();

    string getMaterial();

    int getBatteryLvl();

    string getColor();


    //______________________________________ Setters _______________________________
    void setNumber(string);

    void setModel(string);

    void setOS(string);

    void setMaterial(string);

    void setBatteryLvl(int);

    void setColor(string);



    //__________________________________________ Methodes ____________________________________

    void turnOn();

    void turnOff();

    void call(string, Person&);

    void charge(int);

    void checkBattery();

    void display() const;
};

