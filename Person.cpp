#include "Person.h"


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
    strcpy_s(this->name,99, name);
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
