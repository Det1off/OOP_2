#pragma once
#include "Includes.h"


class Kettle {
private:
    string brand;
    double capacity;
    bool isOn;
    string material;
    int temperature;
    string color;



public:
    //_________________________________________ Getters _______________________

    string getBrand();

    double getCapacity();

    string getMaterial();

    int getTemperature();

    string getColor();

    //______________________________________ Setters _______________________________

    void setBrand(string newBrand);

    void setCapacity(double newCapacity);

    void setIsOn(string newMaterial);

    void setTemperature(int newTemperature);

    void setColor(string newColor);



    //__________________________________________ Methodes ____________________________________

    void turnOn();

    void turnOff();

    void Temperature(int temp);

    void pourWater(double amount);

    void refillWater(double amount);



};





