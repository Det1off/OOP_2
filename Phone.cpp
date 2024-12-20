#include "Phone.h"

//�������� ���������� 

bool operator>(const Phone& lhs, const Phone& rhs) {
    return lhs.batteryLvl > rhs.batteryLvl;
}

bool operator<(const Phone& lhs, const Phone& rhs) {
    return lhs.batteryLvl < rhs.batteryLvl;
}

bool operator==(const Phone& lhs, const Phone& rhs) {
    return lhs.batteryLvl == rhs.batteryLvl && lhs.color == rhs.color && strcmp(lhs.model, rhs.model) == 0;
}

bool operator!=(const Phone& lhs, const Phone& rhs) {
    return !(lhs == rhs);
}

ostream& operator<<(ostream& os, const Phone& phone) {
    os << "Phone(model: " << phone.model << ", color: " << phone.color << ", batteryLvl: " << phone.batteryLvl << ")";
    return os;
}

istream& operator>>(istream& is, Phone& phone) {
    cout << "Enter model: ";
    char model[100];
    is >> model;
    phone.setModel(model);

    cout << "Enter color: ";
    is >> phone.color;

    cout << "Enter battery level: ";
    is >> phone.batteryLvl;

    return is;
}

// ����� �������������� � ������
Phone::operator std::string() const {
    return "Model: " + std::string(model) + ", Color: " + color + ", Battery Level: " + std::to_string(batteryLvl) + "%";
}

// ���������� ��������� ������������
Phone& Phone::operator=(const Phone& other) {
    if (this != &other) {  // �������� �� ����������������
        delete[] model;    // ������������ ������ ������

        batteryLvl = other.batteryLvl;
        color = other.color;
        model = new char[strlen(other.model) + 1];
        strcpy_s(model, strlen(other.model) + 1, other.model);
    }
    return *this;
}

//________________________Constructors__________________________

// ����� ����������� ��� ����������
Phone::Phone() : Phone(28, "Sony", "Red") {
    cout << "Construct was called - Phone " << this << "\n";
}

Phone::Phone(int batteryLvl) : Phone(batteryLvl, "Unknow", "Unknow") {
    cout << "Second construct was callde - Phone " << this << "\n";
}

Phone::Phone(int batteryLvl, const char* model, string color) {
    setBatteryLvl(batteryLvl);
    setColor(color);
    this->model = new char [strlen(model) + 1];
    strcpy_s(this->model, strlen(model) + 1, model);
    count++;
    cout << "Third(Main) construct was callde - Phone " << this << "\n";

}

// ����������� �����������
Phone::Phone(const Phone& other) {
    batteryLvl = other.batteryLvl;
    color = other.color;
    model = new char[strlen(other.model) + 1];
    strcpy_s(model, strlen(other.model) + 1, other.model);
    cout << "����������� ��� ������ - Phone " << this << "\n";
}

 // ����������
Phone::~Phone() {
    delete[] model;
    cout << "���������� ��� ������ - Phone " << this << "\n";
}


//_________________________________________ Getters _______________________
string Phone::getNumber() {
    return number;
}

const char* Phone::getModel() {
    return model;
}

string Phone::getOS() {
    return OS;
}

string Phone::getMaterial() {
    return material;
}

int Phone::getBatteryLvl() {
    return batteryLvl;
}

string Phone::getColor() {
    return color;
}


//______________________________________ Setters _______________________________
void Phone::setNumber(string number) {
    this->number = number;
}

void Phone::setModel(const char* model) {
    delete[] this->model;
    this->model = new char[strlen(model) + 1];
    strcpy_s(this->model, strlen(model) + 1, model);
}


void Phone::setOS(string OS) {
    this->OS = OS;
}

void Phone::setMaterial(string material) {
    this->material = material;
}

void Phone::setBatteryLvl(int batteryLvl) {
    this->batteryLvl = batteryLvl;
}

void Phone::setColor(string color) {
    this->color = color;
}



//__________________________________________ Methodes ____________________________________

void Phone::turnOn() {
    isOn = true;
}

void Phone::turnOff() {
    isOn = false;
}

void Phone::call(string number, Person& person) {
    if (number == "+380") {
        cout << "You called to " << person.getName() << "\n";
    }
    else {
        cout << "Unknow persom" << "\n";
    }
}

void Phone::charge(int amount) {
    batteryLvl += amount;
}

void Phone::checkBattery() {
    cout << "Battery level: " << batteryLvl << "%" << "\n";
}

void Phone::display() const {
    cout << "Age: " << batteryLvl << ", Name: " << model << ", Energy Level: " << color << "\n";
}