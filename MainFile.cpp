#include <iostream>
#include "Phone.h"
#include "Person.h"
#include "Pen.h"
#include "Book.h"
#include "Kettle.h"
using namespace std;




int main() {

    Person person;
    person.setName("Maxim");
    person.setFreeHands(0);
    person.getName();
    
    Phone phone;
    phone.setOS("IOS");
    cout << "OS: " << phone.getOS() << "\n";
    phone.setModel("Iphone");
    cout << "Model: " << phone.getModel() << "\n";
    phone.setNumber("+380");
    phone.call(phone.getNumber(), person);

    Kettle kettle;
    kettle.setIsWorking("Yes"); // No/Yes
    kettle.turnOnOff(kettle.getIsWorking(), person);


}