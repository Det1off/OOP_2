#include "Includes.h"



int main() {

    Kettle kettle;
    kettle.setBrand("Bosh");
    cout << "Brand: " << kettle.getBrand() << "\n";

    kettle.setTemperature(83);
    cout << "Temperature: " << kettle.getTemperature() << "\n";




    Book book;
    book.setAuthor("Pushkin");
    cout << "Author: " << book.getAuthor() << "\n";

    book.setCurrentPage(23);
    cout << "Current page: " << book.getCurrentPage() << "\n";




    Phone phone;
    phone.setOS("Android");
    cout << "OS: " << phone.getOS() << "\n";

    phone.setModel("Iphone");
    cout << "Model: " << phone.getModel() << "\n";


    Pen pen;
    pen.setColor("Purple");
    cout << "Color: " << pen.getColor() << "\n";

    pen.setInkLvl(23.1);
    cout << "Ink Level: " << pen.getInkLvl() << "\n";




    Person person;
    person.setEnergyLvl(50);

    person.work(person.getEnergyLvl());

}