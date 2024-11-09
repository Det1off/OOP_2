#include "Banknote.h"

//_________________________________________ Getters _______________________

int Banknote:: getDenomination() {
    return denomination;
}

string Banknote::getCurrency() {
    return currency;
}

long long Banknote::getSerialNumber() {
    return serialNumber;
}

string Banknote::getCondition() {
    return condition;
}

int Banknote::getYearOfIssue() {
    return yearOfIssue;
}

//______________________________________ Setters _______________________________

void Banknote::setDenomination(int newDenomination) {
    denomination = newDenomination;
}

void Banknote::setCurrency(string newCurrency) {
    currency = newCurrency;
}

void Banknote::setSerialNumber(long long newSerialNumber) {
    serialNumber = newSerialNumber;
}

void Banknote::setCondition(string newCondition) {
    condition = newCondition;
}

void Banknote::setYearOfIssue(int newYearOfIssue) {
    yearOfIssue = newYearOfIssue;
}

//__________________________________________ Methodes ____________________________________

void Banknote::inspect() {
    cout << "Inspecting banknote..." << "\n";
}

void Banknote::validate() {
    cout << "Validating banknote..." << "\n";
}

void Banknote::exchange(string currencyType) {
    currency = currencyType;
}

void Banknote::updateCondition(string newCondition) {
    condition = newCondition;
}

void Banknote::printInfo() {
    cout << denomination << " " << currency << " (" << yearOfIssue << "), Condition: " << condition << "\n";
}