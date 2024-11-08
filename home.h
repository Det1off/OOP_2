#pragma once
#include <string>
#include <iostream>
using namespace std;


class Kettle {
private:
    string brand;
    double capacity;
    bool isOn;
    string material;
    int temperature;
    string color;



public:

    string getBrand() {
        return brand;
    }

    double getCapacity() {
        return capacity;
    }

    string getMaterial() {
        return material;
    }

    int getTemperature() {
        return temperature;
    }

    string getColor() {
        return color;
    }



    void setBrand(string newBrand) {
        newBrand = brand;
    }

    void setCapacity(double newCapacity) {
        newCapacity = capacity;
    }

    void setIsOn(string newMaterial) {
        newMaterial = material;
    }

    void setTemperature(int newTemperature) {
        newTemperature = temperature;
    }

    void setColor(string newColor) {
        newColor = color;
    }





    void turnOn() {
        isOn = true;
    }

    void turnOff() {
        isOn = false;
    }

    void Temperature(int temp) {
        temperature = temp;
    }

    void pourWater(double amount) {
        capacity -= amount;
    }

    void refillWater(double amount) {
        capacity += amount;
    }



};

class Book {
private:
    string title;
    string author;
    int pages;
    string genre;
    int currentPage;



public:


    string getTitle() {
        return title;
    }

    int getPages() {
        return pages;
    }

    string getGenre() {
        return genre;
    }

    int getCurrentPage() {
        return currentPage;
    }

    string getAuthor() {
        return author;
    }



    void setTitle(string newTitle) {
        newTitle = title;
    }

    void setPages(double newPages) {
        newPages = pages;
    }

    void setGenre(string newGenre) {
        newGenre = genre;
    }

    void setCurrentPage(int newCurrentPage) {
        newCurrentPage = currentPage;
    }

    void setAuthor(string newAuthor) {
        newAuthor = author;
    }








    void open() {
        cout << "Opening book..." << "\n";
    }

    void close() {
        cout << "Closing book..." << "\n";
    }

    void turnPage(int pageNum) {
        currentPage = pageNum;
    }

    void read() {
        cout << "Reading page " << currentPage << "..." << "\n";
    }

    void bookmark() {
        cout << "Bookmarking page " << currentPage << "\n";
    }

};

class Phone {
private:
    string model;
    string OS;
    int batteryLvl;
    string material;
    bool isOn;
    string color;



public:

    string getModel() {
        return model;
    }

    string getOS() {
        return OS;
    }

    string getMaterial() {
        return material;
    }

    int getBatteryLvl() {
        return batteryLvl;
    }

    string getColor() {
        return color;
    }



    void setModel(string newModel) {
        newModel = model;
    }

    void setOS(string newOS) {
        newOS = OS;
    }

    void setMaterial(string newMaterial) {
        newMaterial = material;
    }

    void setBatteryLvl(int newbatteryLvl) {
        newbatteryLvl = batteryLvl;
    }

    void setColor(string newColor) {
        newColor = color;
    }





    void turnOn() {
        isOn = true;
    }

    void turnOff() {
        isOn = false;
    }

    void call(string number) {
        cout << "Calling " << number << "..." << "\n";
    }

    void charge(int amount) {
        batteryLvl += amount;
    }

    void checkBattery() {
        cout << "Battery level: " << batteryLvl << "%" << "\n";
    }
};

class Pen {
private:
    string color;
    double inkLvl;
    string type;
    string material;
    bool isCapped;
    string brand;




public:

    string getColor() {
        return color;
    }

    double getInkLvl() {
        return inkLvl;
    }

    string getType() {
        return type;
    }

    string getMaterial() {
        return material;
    }

    string getBrand() {
        return brand;
    }



    void setColor(string newColor) {
        newColor = color;
    }

    void setInkLvl(double newInkLvl) {
        newInkLvl = inkLvl;
    }

    void setType(string newType) {
        newType = type;
    }

    void setMaterial(string newMaterial) {
        newMaterial = material;
    }

    void setBrand(string newBrand) {
        newBrand = brand;
    }








    void cap() {
        isCapped = true;
    }

    void uncap() {
        isCapped = false;
    }

    void write() {
        cout << "Writing with pen..." << "\n"; inkLvl -= 0.1;
    }

    void refill(double amount) {
        inkLvl += amount;
    }

    void checkInkLevel() {
        cout << "Ink level: " << inkLvl << "\n";
    }
};

class Banknote {
private:
    int denomination;
    string currency;
    long long serialNumber;
    string condition;
    int yearOfIssue;



public:

    int getDenomination() {
        return denomination;
    }

    string getCurrency() {
        return currency;
    }

    long long getSerialNumber() {
        return serialNumber;
    }

    string getCondition() {
        return condition;
    }

    int getYearOfIssue() {
        return yearOfIssue;
    }



    void setDenomination(int newDenomination) {
        newDenomination = denomination;
    }

    void setCurrency(string newCurrency) {
        newCurrency = currency;
    }

    void setSerialNumber(long long newSerialNumber) {
        newSerialNumber = serialNumber;
    }

    void setCondition(string newCondition) {
        newCondition = condition;
    }

    void setYearOfIssue(int newYearOfIssue) {
        newYearOfIssue = yearOfIssue;
    }







    void inspect() {
        cout << "Inspecting banknote..." << "\n";
    }

    void validate() {
        cout << "Validating banknote..." << "\n";
    }

    void exchange(string currencyType) {
        currency = currencyType;
    }

    void updateCondition(string newCondition) {
        condition = newCondition;
    }

    void printInfo() {
        cout << denomination << " " << currency << " (" << yearOfIssue << "), Condition: " << condition << "\n";
    }
};