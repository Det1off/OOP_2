#include "Pen.h"

//Оператор перегрузки
bool operator>(const Pen& lhs, const Pen& rhs) {
    return lhs.inkLevel > rhs.inkLevel;
}

bool operator<(const Pen& lhs, const Pen& rhs) {
    return lhs.inkLevel < rhs.inkLevel;
}

bool operator==(const Pen& lhs, const Pen& rhs) {
    return lhs.inkLevel == rhs.inkLevel && lhs.color == rhs.color;
}

bool operator!=(const Pen& lhs, const Pen& rhs) {
    return !(lhs == rhs);
}

ostream& operator<<(ostream& out, const Pen& obj) {
    out << "Pen [Brand: " << obj.brand << ", Color: " << obj.color 
        << ", Ink Level: " << obj.inkLevel 
        << ", Gel: " << (obj.isGel ? "Yes" : "No") << "]";
    return out;
}

istream& operator>>(istream& in, Pen& obj) {
    char tempBrand[100];
    cout << "Enter pen brand: ";
    in >> tempBrand;
    obj.setBrand(tempBrand);

    cout << "Enter pen color: ";
    in >> obj.color;

    cout << "Enter ink level: ";
    in >> obj.inkLevel;

    cout << "Is it a gel pen? (1 for yes, 0 for no): ";
    in >> obj.isGel;

    return in;
}

// Явное преобразование в строку
Pen::operator std::string() const {
    return "Type: " + type + ", Brand: " + brand + ", Ink Level: " + std::to_string(inkLvl);
}

// Перегрузка оператора присваивания
Pen& Pen::operator=(const Pen& other) {
    if (this != &other) {
        delete[] material;

        color = other.color;
        inkLvl = other.inkLvl;
        type = other.type;
        brand = other.brand;
        isCapped = other.isCapped;

        material = new char[strlen(other.material) + 1];
        strcpy_s(material, strlen(other.material) + 1, other.material);
    }
    return *this;
}


//________________________Constructors__________________________

// Явный конструктор без параметров
Pen::Pen() : Pen("Metal", "Automatic", "Penny") {
    cout << "Construct was called - Pen " << "\n";
}

Pen::Pen(const char* material) : Pen(material, "Unknow", "Unknow") {
    cout << "Second construct was callde - Pen " << "\n";
}

Pen::Pen(const char* material, string type, string brand) {
    this->type = type;
    this->brand = brand;
    this->material = new char[strlen(material) + 1];
    strcpy_s(this->material, strlen(material) + 1, material);
    cout << "Third(Main) construct was callde - Pen" << "\n";
}

// Конструктор копирования

Pen::Pen(const Pen& other) {
    material = new char[strlen(other.material) + 1];
    strcpy_s(material, strlen(other.material) + 1, other.material);
    cout << "Конструктор копирования был вызван - Pen " << this << "\n";
}

// Деструктор

Pen:: ~Pen() {
    delete[] material;
    cout << "Деструктор вызван - Pen " << this << "\n";
}

//_________________________________________ Getters _______________________

string Pen:: getColor() {
    return color;
}

double Pen::getInkLvl() {
    return inkLvl;
}

string Pen::getType() {
    return type;
}

const char* Pen::getMaterial() {
    return material;
}

string Pen::getBrand() {
    return brand;
}


//______________________________________ Setters _______________________________

void Pen::setColor(string color) {
    this->color = color;
}

void Pen::setInkLvl(double inkLvl) {
    this->inkLvl = inkLvl;
}

void Pen::setType(string type) {
    this->type = type;
}

void Pen::setMaterial(const char* material) {
    delete[] this->material;
    this->material = new char[strlen(material)];
    strcpy_s(this->material, strlen(material) + 1, material);

}

void Pen::setBrand(string brand) {
    this->brand = brand;
}


//__________________________________________ Methodes ____________________________________
void Pen::cap() {
    isCapped = true;
}

void Pen::uncap() {
    isCapped = false;
}

void Pen::write() {
    cout << "Writing with pen..." << "\n"; inkLvl -= 0.1;
}

void Pen::refill(double amount) {
    inkLvl += amount;
}

void Pen::checkInkLevel() {
    cout << "Ink level: " << inkLvl << "\n";
}

void Pen::display() const {
    cout << "Age: " << material << ", Name: " << type << ", Energy Level: " << brand << "\n";
}