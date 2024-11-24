#include "Person.h"

//Оператор перегрузки

bool operator>(const Person& lhs, const Person& rhs) {
    return lhs.energyLvl > rhs.energyLvl;
}

bool operator<(const Person& lhs, const Person& rhs) {
    return lhs.energyLvl < rhs.energyLvl;
}

bool operator==(const Person& lhs, const Person& rhs) {
    return lhs.age == rhs.age && strcmp(lhs.name, rhs.name) == 0;
}

bool operator!=(const Person& lhs, const Person& rhs) {
    return !(lhs == rhs);
}

ostream& operator<<(ostream& os, const Person& person) {
    os << "Person(name: " << person.name << ", age: " << person.age << ", energy: " << person.energyLvl << ")";
    return os;
}

istream& operator>>(istream& is, Person& person) {
    cout << "Enter name: ";
    char name[100];
    is >> name;
    person.setName(name);

    cout << "Enter age: ";
    is >> person.age;

    cout << "Enter energy level: ";
    is >> person.energyLvl;

    return is;
}

//Конструкторы

// Конструктор без параметров
Person :: Person() : Person(28, 100, "Unknown") {
    cout << "Конструктор по умолчанию вызван - Person " << this << "\n";
}

// Конструктор с параметрами (возраст и энергия)
Person :: Person(int age, int energyLvl) : Person(age, energyLvl, "Unnamed") {
    cout << "Конструктор с параметрами (возраст, энергия) вызван - Person " << this << "\n";
}

// Конструктор преобразования от строки
Person :: Person(const string& name) : Person(0, 0, name.c_str()) {
    cout << "Конструктор преобразования от строки вызван - Person " << this << "\n";
}

// Основной конструктор
Person :: Person(int age, int energyLvl, const char* name) {
    setAge(age);
    setEnergyLvl(energyLvl);
    setHungryLvl(hungryLvl);
    setFreeHands(freeHands);
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
    count++;
    cout << "Основной конструктор вызван - Person " << this << "\n";
}

// Конструктор копирования
Person :: Person(const Person& other) {
    age = other.age;
    energyLvl = other.energyLvl;
    name = new char[strlen(other.name) + 1];
    strcpy_s(name, strlen(other.name) + 1, other.name);
    cout << "Конструктор был вызван - Person " << this << "\n";
}
//Деструктор
Person::~Person() {
    delete[] name;
    cout << "Деструктор вызван. Освобождение памяти для имени - Person " << this << "\n";
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
void Person::setAge(int age) { 
    this->age = age; 
}

void Person::setName(const char* name) {
    delete[] this->name; // Удаляем старую строку
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name,strlen(name) + 1, name);
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
    cout << "Возраст: " << age << ", Имя: " << name << ", Уровень энергии: " << energyLvl << "\n";
}
