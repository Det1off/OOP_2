#include "Person.h"

//�������� ����������

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

//������������

// ����������� ��� ����������
Person :: Person() : Person(28, 100, "Unknown") {
    cout << "����������� �� ��������� ������ - Person " << this << "\n";
}

// ����������� � ����������� (������� � �������)
Person :: Person(int age, int energyLvl) : Person(age, energyLvl, "Unnamed") {
    cout << "����������� � ����������� (�������, �������) ������ - Person " << this << "\n";
}

// ����������� �������������� �� ������
Person :: Person(const string& name) : Person(0, 0, name.c_str()) {
    cout << "����������� �������������� �� ������ ������ - Person " << this << "\n";
}

// �������� �����������
Person :: Person(int age, int energyLvl, const char* name) {
    setAge(age);
    setEnergyLvl(energyLvl);
    setHungryLvl(hungryLvl);
    setFreeHands(freeHands);
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
    count++;
    cout << "�������� ����������� ������ - Person " << this << "\n";
}

// ����������� �����������
Person :: Person(const Person& other) {
    age = other.age;
    energyLvl = other.energyLvl;
    name = new char[strlen(other.name) + 1];
    strcpy_s(name, strlen(other.name) + 1, other.name);
    cout << "����������� ��� ������ - Person " << this << "\n";
}
//����������
Person::~Person() {
    delete[] name;
    cout << "���������� ������. ������������ ������ ��� ����� - Person " << this << "\n";
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
void Person::setAge(int age) { 
    this->age = age; 
}

void Person::setName(const char* name) {
    delete[] this->name; // ������� ������ ������
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
    cout << "�������: " << age << ", ���: " << name << ", ������� �������: " << energyLvl << "\n";
}
