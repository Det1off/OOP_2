#include "Person.h"

// Конструктор без параметров
Person::Person() : Person(28, 100, "Unknown") {
    cout << "Конструктор по умолчанию вызван.\n";
}

// Конструктор с параметрами (возраст и энергия)
Person::Person(int age, int energyLvl) : Person(age, energyLvl, "Unnamed") {
    cout << "Конструктор с параметрами (возраст, энергия) вызван.\n";
}

// Конструктор преобразования от строки
Person::Person(const string& name) : Person(0, 0, name.c_str()) {
    cout << "Конструктор преобразования от строки вызван.\n";
}

// Основной конструктор
Person::Person(int age, int energyLvl, const char* name)
    : age(age), energyLvl(energyLvl), hungryLvl(50), freeHands(2) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    cout << "Основной конструктор вызван.\n";
}

// Деструктор
Person::~Person() {
    cout << "Деструктор вызван. Освобождение памяти для имени.\n";
    delete[] name;
}

// Геттеры
int Person::getAge()  {
    return age; 
}
const char* Person::getName() {
    return name; 
}
int Person::getFreeHands() {
 return freeHands; 
}
int Person::getEnergyLvl() {
 return energyLvl; 
}
int Person::getHungryLvl() {
    return hungryLvl; 
}

// Сеттеры
void Person::setAge(int age) { this->age = age; }

void Person::setName(const char* name) {
    delete[] this->name; // Удаляем старую строку
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

void Person::setFreeHands(int freeHands) { 
    this->freeHands = freeHands; 
}
void Person::setEnergyLvl(int energyLvl) { 
    this->energyLvl = energyLvl; 
}
void Person::setHungryLvl(int hungryLvl) { 
    this->hungryLvl = hungryLvl; 
}

// Методы
void Person::work(int currentEnergy) {
    energyLvl = currentEnergy;
    if (currentEnergy >= 20) {
        cout << "Работа выполняется...\n";
    }
    else {
        cout << "Вы слишком устали для работы.\n";
    }
}

void Person::read() {
    cout << name << " читает книгу.\n"; 
}

void Person::write() {
    cout << name << " пишет заметку.\n"; 
}

void Person::eat() { 
    hungryLvl -= 10; 
}

void Person::display() const {
    cout << "Возраст: " << age << ", Имя: " << name
        << ", Уровень энергии: " << energyLvl << "\n";
}
