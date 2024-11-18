#include "Person.h"


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
