#ifndef BURGER_H
#define BURGER_H
#include "fooditem.h"
#include <fstream>
#include <iostream>



// Polymorphism + Inheritence
class Burger : public FoodItem
{
private:
    int patty_type;
    bool cheese;

public:
    Burger(std::string name, int price, int spice_level, int food_type) : FoodItem(name, price, spice_level, food_type){

    }

    enum PATTY_TYPE {BEEF, CHICKEN, MUTTON};

    void setPattyType(int patty_type);
    std::string getPattyType() const;

    void setCheese(bool);
    std::string getCheese() const;

    // Implementing virtual function
    void saveItemToText(void);

};

#endif // BURGER_H
