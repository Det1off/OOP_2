#include "Person.h"

// ����������� ��� ����������
Person::Person() : Person(28, 100, "Unknown") {
    cout << "����������� �� ��������� ������.\n";
}

// ����������� � ����������� (������� � �������)
Person::Person(int age, int energyLvl) : Person(age, energyLvl, "Unnamed") {
    cout << "����������� � ����������� (�������, �������) ������.\n";
}

// ����������� �������������� �� ������
Person::Person(const string& name) : Person(0, 0, name.c_str()) {
    cout << "����������� �������������� �� ������ ������.\n";
}

// �������� �����������
Person::Person(int age, int energyLvl, const char* name)
    : age(age), energyLvl(energyLvl), hungryLvl(50), freeHands(2) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    cout << "�������� ����������� ������.\n";
}

// ����������
Person::~Person() {
    cout << "���������� ������. ������������ ������ ��� �����.\n";
    delete[] name;
}

// �������
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

// �������
void Person::setAge(int age) { this->age = age; }

void Person::setName(const char* name) {
    delete[] this->name; // ������� ������ ������
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

// ������
void Person::work(int currentEnergy) {
    energyLvl = currentEnergy;
    if (currentEnergy >= 20) {
        cout << "������ �����������...\n";
    }
    else {
        cout << "�� ������� ������ ��� ������.\n";
    }
}

void Person::read() {
    cout << name << " ������ �����.\n"; 
}

void Person::write() {
    cout << name << " ����� �������.\n"; 
}

void Person::eat() { 
    hungryLvl -= 10; 
}

void Person::display() const {
    cout << "�������: " << age << ", ���: " << name
        << ", ������� �������: " << energyLvl << "\n";
}
