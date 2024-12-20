#pragma once
#include <iostream>
#include <cstring>
#include <Windows.h>
#include "Person.h"
using namespace std;


class Kettle {
private:
    char* brand = nullptr;
    double capacity;
    string isWorking;
    string material;
    int temperature;
    string color;



public:
    //�������� ����������
    friend bool operator>(const Kettle& lhs, const Kettle& rhs);
    friend bool operator<(const Kettle& lhs, const Kettle& rhs);
    friend bool operator==(const Kettle& lhs, const Kettle& rhs);
    friend bool operator!=(const Kettle& lhs, const Kettle& rhs);
    friend ostream& operator<<(ostream& out, const Kettle& obj);
    friend istream& operator>>(istream& in, Kettle& obj);

    // �������� ������������
    Kettle& operator=(const Kettle& other);

    // ����� �������� �������������� � ������
    explicit operator std::string() const;

    //________________________Constructors__________________________
    // ����� ����������� ��� ����������
    Kettle();

    Kettle(int batteryLvl);

    Kettle(int temperature, string color, const char* brand);

    //����������� �����������

    Kettle(const Kettle& other);

    //����������

    ~Kettle();

    //_________________________________________ Getters _______________________


    const char* getBrand();
    double getCapacity();
    string getMaterial();
    int getTemperature();
    string getColor();
    string getIsWorking();

    //______________________________________ Setters _______________________________

    void setBrand(const char*);
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





