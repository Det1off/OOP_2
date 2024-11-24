#pragma once
#include <iostream>
#include <Windows.h>
#include <cstring>
#include "Person.h"
using namespace std;


class Phone {
private:
    string number;
    char* model = nullptr;
    string OS;
    int batteryLvl;
    string material;
    bool isOn;
    string color;



public:
    // Оператор перегрузки

    friend bool operator>(const Phone& lhs, const Phone& rhs);
    friend bool operator<(const Phone& lhs, const Phone& rhs);
    friend bool operator==(const Phone& lhs, const Phone& rhs);
    friend bool operator!=(const Phone& lhs, const Phone& rhs);
    friend ostream& operator<<(ostream& os, const Phone& phone);
    friend istream& operator>>(istream& is, Phone& phone);

    static int count;

    //________________________Constructors__________________________

    // Явный конструктор без параметров
    Phone();

    Phone(int batteryLvl);

    Phone(int batteryLvl, const char* model, string color);

    // Конструктор копирования
    Phone(const Phone& other);

    // Деструктор
    ~Phone();


    //_________________________________________ Getters _______________________
    
    string getNumber();
    const char* getModel();
    string getOS();
    string getMaterial();
    int getBatteryLvl();
    string getColor();


    //______________________________________ Setters _______________________________
    
    void setNumber(string);
    void setModel(const char*);
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

