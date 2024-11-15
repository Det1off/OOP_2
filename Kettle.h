#pragma once
#include <iostream>
#include "Person.h"
using namespace std;


class Kettle {
private:
    string brand;
    double capacity;
    string isWorking;
    string material;
    int temperature;
    string color;



public:

    //________________________Constructors__________________________
    // явный конструктор без параметров
    Kettle() : Kettle(28, "Gray", "Panasonic") {
        cout << "Construct was called" << "\n";
    }

    Kettle(int batteryLvl) : Kettle(batteryLvl, "Unknow", "Unknow") {
        cout << "Second construct was callde" << "\n";
    }

    Kettle(int temperature, string color, string brand) {
        cout << "Third(Main) construct was callde" << "\n";
        this->temperature = temperature;
        this->color = color;
        this->brand = brand;
    }

    //_________________________________________ Getters _______________________


    string getBrand();

    double getCapacity();

    string getMaterial();

    int getTemperature();

    string getColor();

    string getIsWorking();

    //______________________________________ Setters _______________________________

    

    void setBrand(string);

    void setCapacity(double);

    void setMaterial(string);

    void setTemperature(int);

    void setColor(string newColor);

    void setIsWorking(string newIsWork);

    //__________________________________________ Methodes ____________________________________

    void turnOnOff(string, Person&);


    void Temperature(int);

    void pourWater(double);

    void refillWater(double);

    void display() const;

};





