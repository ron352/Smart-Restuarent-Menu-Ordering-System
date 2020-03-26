#include "pizza.h"
#include <iostream>
#include <fstream>

using std::ofstream;

void Pizza::setRadius(int radius){
    this->radius = radius;
}

int Pizza::getRadius() const {
    return this->radius;
}


void Pizza::setToppings(std::string toppings){
    this->toppings = toppings;
}

std::string Pizza::getToppings() const {
    return this->toppings;
}


void Pizza::saveItemToText(){
    std::string filename = this->getName() + ".txt";
    ofstream file;
    file.open(filename);

    file << "Item : " << this->getName() << std::endl
         << "Toppings : " << this->getToppings() << std::endl
         << "Spice level: " << this->getSpiceLevel() << std::endl
         << "Size : " << this->getRadius() << std::endl;

    file.close();
}
