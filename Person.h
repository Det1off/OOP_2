#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    int age;
    char* name; // Поле-указатель для имени
    int freeHands;
    int energyLvl;
    int hungryLvl;

public:
    // Конструкторы
    Person();                                // Конструктор без параметров
    Person(int age, int energyLvl);          // Конструктор с параметрами
    Person(const string& name);              // Конструктор преобразования
    Person(int age, int energyLvl, const char* name); // Основной конструктор

    // Деструктор
    ~Person();

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
