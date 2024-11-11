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
    //_________________________________________ Getters _______________________


    string getBrand();

    double getCapacity();

    string getMaterial();

    int getTemperature();

    string getColor();

    string getIsWorking();

    //______________________________________ Setters _______________________________

    

    void setBrand(string newBrand);

    void setCapacity(double newCapacity);

    void setMaterial(string newMaterial);

    void setTemperature(int newTemperature);

    void setColor(string newColor);

    void setIsWorking(string newIsWork);

    //__________________________________________ Methodes ____________________________________

    void turnOnOff(string ifWork, Person& freeHand);


    void Temperature(int temp);

    void pourWater(double amount);

    void refillWater(double amount);



};





