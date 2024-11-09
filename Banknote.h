#pragma once
#include "Includes.h"

class Banknote {
private:
    int denomination;
    string currency;
    long long serialNumber;
    string condition;
    int yearOfIssue;



public:
//_________________________________________ Getters _______________________

    int getDenomination();

    string getCurrency();

    long long getSerialNumber();

    string getCondition();

    int getYearOfIssue();

//______________________________________ Setters _______________________________

    void setDenomination(int newDenomination);

    void setCurrency(string newCurrency);

    void setSerialNumber(long long newSerialNumber);

    void setCondition(string newCondition);

    void setYearOfIssue(int newYearOfIssue);

//__________________________________________ Methodes ____________________________________

    void inspect();

    void validate();

    void exchange(string currencyType);

    void updateCondition(string newCondition);

    void printInfo();
};

