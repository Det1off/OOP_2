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

    static int count;

    // ����������� ��� ����������
    Person();

    // ����������� � ����������� (������� � �������)
    Person(int age, int energyLvl);

    // ����������� �������������� �� ������
    Person(const string& name);

    // �������� �����������
    Person(int age, int energyLvl, const char* name);

    // ����������� �����������
    Person(const Person& other);
    
    // ����������
    ~Person();

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

