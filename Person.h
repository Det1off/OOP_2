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
    // Конструктор без параметров
    Person();

    // Конструктор с параметрами (возраст и энергия)
    Person(int age, int energyLvl);

    // Конструктор преобразования от строки
    Person(const string& name);

    // Основной конструктор
    Person(int age, int energyLvl, const char* name);

    // Конструктор копирования
    Person(const Person& other);
    
    // Деструктор
    ~Person() {
        delete[] name;
        cout << "Деструктор вызван. Освобождение памяти для имени - Person " << this << "\n";
    }

    // Геттеры
    int getAge() ;
    const char* getName() ;
    int getFreeHands() ;
    int getEnergyLvl() ;
    int getHungryLvl() ;

    // Сеттеры
    void setAge(int age);
    void setName(const char* name);
    void setFreeHands(int freeHands);
    void setEnergyLvl(int energyLvl);
    void setHungryLvl(int hungryLvl);

    // Методы
    void work(int currentEnergy);
    void read();
    void write();
    void eat();
    void display() const;
};
