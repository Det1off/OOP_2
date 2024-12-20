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
    
    //�������� ����������
    friend bool operator>(const Pen& lhs, const Pen& rhs);
    friend bool operator<(const Pen& lhs, const Pen& rhs);
    friend bool operator==(const Pen& lhs, const Pen& rhs);
    friend bool operator!=(const Pen& lhs, const Pen& rhs);
    friend ostream& operator<<(ostream& out, const Pen& obj);
    friend istream& operator>>(istream& in, Pen& obj);

    // �������� ������������
    Pen& operator=(const Pen& other);

    // ����� �������� �������������� � ������
    explicit operator std::string() const;

    //________________________Constructors__________________________
    
    // ����� ����������� ��� ����������
    Pen();

    Pen(const char* material);

    Pen(const char* material, string type, string brand);

    // ����������� �����������

    Pen(const Pen& other);

    // ����������

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

