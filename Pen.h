#pragma once
#include <iostream>
#include <Windows.h>
#include <cstring>
using namespace std;

class Pen {
private:
    string color;
    double inkLvl;
    string type;
    char* material = nullptr;
    bool isCapped;
    string brand;

public:
    
    //Оператор перегрузки
    friend istream& operator>>(istream& in, Pen& pen);

    //________________________Constructors__________________________
    
    // Явный конструктор без параметров
    Pen();

    Pen(const char* material);

    Pen(const char* material, string type, string brand);

    // Конструктор копирования

    Pen(const Pen& other);

    // Деструктор

    ~Pen();


//_________________________________________ Getters _______________________

    string getColor();
    double getInkLvl();
    string getType();
    const char* getMaterial();
    string getBrand();


//______________________________________ Setters _______________________________

    void setColor(string);
    void setInkLvl(double);
    void setType(string);
    void setMaterial(const char*);
    void setBrand(string);

//__________________________________________ Methodes ____________________________________
    
    void cap();
    void uncap();
    void write();
    void refill(double);
    void checkInkLevel();
    void display() const;
};

