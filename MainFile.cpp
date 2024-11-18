#include <iostream>
#include "Phone.h"
#include "Person.h"
#include "Pen.h"
#include "Book.h"
#include "Kettle.h"
using namespace std;




int main() {
    setlocale(0, "RU");

    cout << "Person" << "\n";
    Person person1(13,100,"Maxim");
    Person person2(12, 100);
    Person person;

    person1.display();
    person2.display();
    person.display();
    
    cout << "\n" << "\n";
    
    //person.setName("Maxim");
    //person.setFreeHands(0);
    //person.getName();
    
    cout << "Phone" << "\n";

    Phone phone1(10);
    Phone phone2(12, "Max", "White");
    Phone phone;

    phone1.display();
    phone2.display();
    phone.display();

    cout << "\n" << "\n";

    //phone.setOS("IOS");
    //cout << "OS: " << phone.getOS() << "\n";
    //phone.setModel("Iphone");
    //cout << "Model: " << phone.getModel() << "\n";
    //phone.setNumber("+380");
    //phone.call(phone.getNumber(), person);

    cout << "Kettle" << "\n";

    Kettle kettle1(23);
    Kettle kettle2(23, "Yellow", "Watson");
    Kettle kettle;

    kettle1.display();
    kettle2.display();
    kettle.display();

    cout << "\n" << "\n";

    //kettle.setIsWorking("Yes"); // No/Yes
    //kettle.turnOnOff(kettle.getIsWorking(), person);

    cout << "Book" << "\n";

    Book book1(15);
    Book book2(50, "Pushkin", 22);
    Book book;

    book1.display();
    book2.display();
    book.display();

    cout << "\n" << "\n";



    cout << "Pen" << "\n";

    Pen pen1("Steel");
    Pen pen2("Stone", "Auto", "StoneHeads");
    Pen pen;

    pen1.display();
    pen2.display();
    pen.display();

}