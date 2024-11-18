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
    Person() : Person(28, 100, "Unknown") {
        cout << "Конструктор по умолчанию вызван.\n";
    }

    // Конструктор с параметрами (возраст и энергия)
    Person(int age, int energyLvl) : Person(age, energyLvl, "Unnamed") {
        cout << "Конструктор с параметрами (возраст, энергия) вызван.\n";
    }

    // Конструктор преобразования от строки
    Person(const string& name) : Person(0, 0, name.c_str()) {
        cout << "Конструктор преобразования от строки вызван.\n";
    }

    // Основной конструктор
    Person(int age, int energyLvl, const char* name)
        : age(age), energyLvl(energyLvl), hungryLvl(50), freeHands(2) {
        this->name = new char[100];
        strcpy_s(this->name, 99, name);
        cout << "Основной конструктор вызван.\n";
    }

    // Деструктор
    ~Person() {
        cout << "Деструктор вызван. Освобождение памяти для имени.\n";
        delete[] name;
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
