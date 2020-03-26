#ifndef FOODITEM_H
#define FOODITEM_H
#include <string>


// Abstract base class
class FoodItem
{
private:
    std::string name;


    int spice_level;
    int food_type;
    int price;

protected:
    std::string recipe;

public:
    enum SPICE_LEVEL {REGULAR, MEDIUM, SPICY};
    enum FOOD_TYPE {BURGER, PIZZA, PASTA};

    FoodItem(std::string, int, int, int);

    void setPrice(int);
    int getPrice() const;

    void setName(std::string);
    std::string getName() const;

    void setSpiceLevel(int);
    std::string getSpiceLevel() const;

    void setFoodType(int);
    std::string getFoodType() const;
    int getFoodTypeNumeric() const;


    // Implementable virtual functions
    virtual void saveItemToText(void) = 0;

};

#endif // FOODITEM_H
