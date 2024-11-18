#pragma once
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

class Person {
private:
    int age;
    char* name = nullptr;
    int freeHands;
    int energyLvl;
    int hungryLvl;

public:
    // ����������� ��� ����������
    Person() : Person(28, 100, "Unknown") {
        cout << "����������� �� ��������� ������.\n";
    }

    // ����������� � ����������� (������� � �������)
    Person(int age, int energyLvl) : Person(age, energyLvl, "Unnamed") {
        cout << "����������� � ����������� (�������, �������) ������.\n";
    }

    // ����������� �������������� �� ������
    Person(const string& name) : Person(0, 0, name.c_str()) {
        cout << "����������� �������������� �� ������ ������.\n";
    }

    // �������� �����������
    Person(int age, int energyLvl, const char* name)
        : age(age), energyLvl(energyLvl), hungryLvl(50), freeHands(2) {
        this->name = new char[100];
        strcpy_s(this->name, 99, name);
        cout << "�������� ����������� ������.\n";
    }

    // ����������
    ~Person() {
        cout << "���������� ������. ������������ ������ ��� �����.\n";
        delete[] name;
    }

    // �������
    int getAge() ;
    const char* getName() ;
    int getFreeHands() ;
    int getEnergyLvl() ;
    int getHungryLvl() ;

    // �������
    void setAge(int age);
    void setName(const char* name);
    void setFreeHands(int freeHands);
    void setEnergyLvl(int energyLvl);
    void setHungryLvl(int hungryLvl);

    // ������
    void work(int currentEnergy);
    void read();
    void write();
    void eat();
    void display() const;
};
