#include "fooditem.h"

FoodItem::FoodItem(std::string name, int price, int spice_level, int food_type)
{
    this->name = name;
    this->price = price;
    this->spice_level = spice_level;
    this->food_type = food_type;
}


void FoodItem::setName(std::string name){
    this->name = name;
}

std::string FoodItem::getName() const {
    return this->name;
}

// Price
void FoodItem::setPrice(int price){
    this->price = price;
}

int FoodItem::getPrice() const {
    return this->price;
}

// Food Type
void FoodItem::setFoodType(int food_type){
    this->food_type = food_type;
}

std::string FoodItem::getFoodType() const {
    std::string ft;
    switch (this->food_type) {
    case FoodItem::FOOD_TYPE::BURGER:
        ft = "Burger";
        break;

    case FoodItem::FOOD_TYPE::PIZZA:
        ft = "Pizza";
        break;

    default:
        ft = "Pasta";
        break;
    }
    return ft;
}


int FoodItem::getFoodTypeNumeric() const {
    return this->food_type;
}

// Spice Level
void FoodItem::setSpiceLevel(int spice_level){
    this->spice_level = spice_level;
}

std::string FoodItem::getSpiceLevel() const {
    std::string sl;

    switch(this->spice_level){
        case FoodItem::SPICE_LEVEL::REGULAR:
        sl = "Regular";
        break;
    case FoodItem::SPICE_LEVEL::MEDIUM:
        sl = "Medium";
        break;
    case FoodItem::SPICE_LEVEL::SPICY:
        sl = "Spicy";
        break;
    default:
        sl = "Regular";
        break;
    }

    return sl;
}
