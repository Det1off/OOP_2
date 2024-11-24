#include "Kettle.h"

//Оператор перегрузки
bool operator>(const Kettle& lhs, const Kettle& rhs) {
    return lhs.power > rhs.power;
}

bool operator<(const Kettle& lhs, const Kettle& rhs) {
    return lhs.power < rhs.power;
}

bool operator==(const Kettle& lhs, const Kettle& rhs) {
    return lhs.power == rhs.power && lhs.volume == rhs.volume && lhs.brand == rhs.brand;
}

bool operator!=(const Kettle& lhs, const Kettle& rhs) {
    return !(lhs == rhs);
}

ostream& operator<<(ostream& out, const Kettle& obj) {
    out << "Kettle [Brand: " << obj.brand << ", Power: " << obj.power
        << "W, Volume: " << obj.volume << "L, Color: " << obj.color << "]";
    return out;
}

istream& operator>>(istream& in, Kettle& obj) {
    cout << "Enter kettle brand: ";
    in >> obj.brand;

    cout << "Enter kettle power (W): ";
    in >> obj.power;

    cout << "Enter kettle volume (L): ";
    in >> obj.volume;

    cout << "Enter kettle color: ";
    in >> obj.color;

    return in;
}

// Явное преобразование в строку
Kettle::operator std::string() const {
    return "Brand: " + std::string(brand) + ", Color: " + color + ", Temperature: " + std::to_string(temperature) + "°C";
}

// Перегрузка оператора присваивания
Kettle& Kettle::operator=(const Kettle& other) {
    if (this != &other) {
        delete[] brand;

        capacity = other.capacity;
        color = other.color;
        isWorking = other.isWorking;
        material = other.material;
        temperature = other.temperature;

        brand = new char[strlen(other.brand) + 1];
        strcpy_s(brand, strlen(other.brand) + 1, other.brand);
    }
    return *this;
}



//________________________Constructors__________________________
// Явный конструктор без параметров
Kettle::Kettle() : Kettle(28, "Gray", "Panasonic") {
    cout << "Construct was called - Kettle " << this << "\n";
}

Kettle::Kettle(int batteryLvl) : Kettle(batteryLvl, "Unknow", "Unknow") {
    cout << "Second construct was callde - Kettle " << this << "\n";
}

Kettle::Kettle(int temperature, string color, const char* brand) {
    setTemperature(temperature);
    setColor(color);
    this->brand = new char[strlen(brand) + 1];
    strcpy_s(this->brand, strlen(brand) + 1, brand);
    cout << "Third(Main) construct was callde - Kettle " << this << "\n";
}

//Конструктор копирования

Kettle::Kettle(const Kettle& other) {
    temperature = other.temperature;
    color = other.color;
    brand = new char[strlen(other.brand) + 1];
    strcpy_s(brand, strlen(other.brand) + 1, other.brand);
    cout << "Конструктор копирования был вызван - Kettle " << this << "\n";
}

//Деструктор

Kettle::~Kettle() {
    delete[] brand;
    cout << "Деструктор был вызван - Kettle " << this << "\n";
}

//_________________________________________ Getters _______________________

const char* Kettle::getBrand() {
    return brand;
}

double Kettle::getCapacity() {
    return capacity;
}

string Kettle::getMaterial() {
    return material;
}

int Kettle::getTemperature() {
    return temperature;
}

string Kettle::getColor() {
    return color;
}

string Kettle::getIsWorking() {
    return isWorking;
}

//______________________________________ Setters _______________________________


void Kettle::setBrand(const char* brand) {
    delete[] this->brand;
    this->brand = new char[strlen(brand) + 1];
    strcpy_s(this->brand, strlen(brand) + 1, brand);

}

void Kettle::setCapacity(double capacity) {
    this->capacity = capacity;
}

void Kettle::setMaterial(string material) {
    this->material = material;
}

void Kettle::setTemperature(int temperature) {
    this->temperature = temperature;
}

void Kettle::setColor(string color) {
    this->color = color;
}

void Kettle::setIsWorking(string isWorking) {
    this->isWorking = isWorking;
}



//__________________________________________ Methodes ____________________________________

void Kettle::turnOnOff(string IfWork,Person& freeHand) {
    if (IfWork == "No"){
        if (freeHand.getFreeHands() > 0) {
            cout << "You turned on the kettle" << "\n";
        }
        else if (freeHand.getFreeHands() <= 0) {
            cout << "Your hands are busy" << "\n";
        }
    }
    else if (IfWork == "Yes") {
        if (freeHand.getFreeHands() > 0) {
            cout << "You turned off the kettle" << "\n";
        }
        else if (freeHand.getFreeHands() <= 0) {
            cout << "Your hands are busy" << "\n";
        }
        else {
            cout << "Enter (Yes/No) in \"string getIsWorking\" " << "\n";
        }
    }
}


void Kettle::Temperature(int temp) {
    temperature = temp;
}

void Kettle::pourWater(double amount) {
    capacity -= amount;
}

void Kettle::refillWater(double amount) {
    capacity += amount;
}

void Kettle::display() const {
    cout << "Age: " << temperature << ", Name: " << color << ", Energy Level: " << brand << "\n";
}
