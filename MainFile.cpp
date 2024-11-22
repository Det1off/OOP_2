#include <iostream>
#include "Phone.h"
#include "Person.h"
#include "Pen.h"
#include "Book.h"
#include "Kettle.h"
using namespace std;

int Person::count = 0;
int Phone::count = 0;

int main() {

    setlocale(0, "RU");

    cout << "Person" << "\n";
    //Person person1(13,100,"Maxim");
    //Person person2(12, 100);

    //person1.display();
    //person2.display();

    //cout << "______________Конструктор копирования_________________" << "\n";

    //Person person3 = person1;

    //person3.display();

    Person person1(25, 100, "Alice");
    Person person2(30, 80, "Bob");
    if (person1 > person2) {
        cout << person1.getName() << " старше.\n";
    }
    else {
        cout << person2.getName() << " старше.\n";
    }

    cout << "\n" << "\n";
    
    //person.setName("Maxim");
    //person.setFreeHands(0);
    //person.getName();
    
    cout << "Phone" << "\n";

    //Phone phone1(10);
    //Phone phone2(12, "Max", "White");
    //Phone phone;

    //phone1.display();
    //phone2.display();
    //phone.display();

    //cout << "Конструктор копирования" << "\n";

    //Phone phone3 = phone2;
    //phone.display();

    Phone phone1(50, "Samsung", "Blue");
    Phone phone2(30, "Apple", "Red");
    Phone total = phone1 + phone2; // Суммирование батарей
    total.display();


    cout << "\n" << "\n";

    //phone.setOS("IOS");
    //cout << "OS: " << phone.getOS() << "\n";
    //phone.setModel("Iphone");
    //cout << "Model: " << phone.getModel() << "\n";
    //phone.setNumber("+380");
    //phone.call(phone.getNumber(), person);

    cout << "Kettle" << "\n";

    //Kettle kettle1(23);
    //Kettle kettle2(23, "Yellow", "Watson");
    //Kettle kettle;

    //kettle1.display();
    //kettle2.display();
    //kettle.display();

    //cout << "Вызов конструктора копирования" << "\n";

    //Kettle kettle3 = kettle2;
    //kettle3.display();

    Kettle kettle(90, "Silver", "Bosch");
    cout << kettle << endl; // Вывод чайника

    cout << "\n" << "\n";

    //kettle.setIsWorking("Yes"); // No/Yes
    //kettle.turnOnOff(kettle.getIsWorking(), person);

    cout << "Book" << "\n";

    //Book book1(15);
    //Book book2(50, "Pushkin", 22);
    //Book book;



    //book1.display();
    //book2.display();
    //book.display();

    //cout << "______________Конструктор копирования_________________" << "\n";

    //Book book3 = book2;

    //book3.display();


    Book book1(300, "Author1", 100);
    Book book2(300, "Author2", 200);
    if (book1 == book2) {
        cout << "Книги имеют одинаковое количество страниц.\n";
    }
    else {
        cout << "Книги имеют разное количество страниц.\n";
    }

    cout << "\n" << "\n";



    cout << "Pen" << "\n";

    //Pen pen1("Steel");
    //Pen pen2("Stone", "Auto", "StoneHeads");
    //Pen pen;

    //pen1.display();
    //pen2.display();
    //pen.display();

    //cout << "Конструктор копирования - Pen " << "\n";

    //Pen pen3 = pen2;

    //pen3.display();

    Pen pen;
    cin >> pen; // Ввод данных ручки

    //cout << "___________________Person_____________Статик (обьект) был вызван - " << person1.count << "раз" << "\n";
    //cout << "___________________Phone______________Статик (обьект) был вызван - " << phone.count << "раз" << "\n";
}