#ifndef PIZZA_H
#define PIZZA_H
#include "fooditem.h"

class Pizza : public FoodItem
{
private:
    std::string toppings;
    int radius;

public:
    Pizza(std::string name, int price, int spice_level, int food_type) : FoodItem(name, price, spice_level, food_type){

    }

    void setRadius(int radius);
    int getRadius() const;

    void setToppings(std::string toppings);
    std::string getToppings() const;

    void saveItemToText();
};

#endif // PIZZA_H
