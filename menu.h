#ifndef MENU_H
#define MENU_H

#include "fooditem.h"
#include "burger.h"
#include "pizza.h"
#include <vector>


class Menu
{
private:
    std::vector <FoodItem*> foods;

    std::vector <FoodItem*> breakfast_menu;
    std::vector <FoodItem*> lunch_menu;
    std::vector <FoodItem*> dinner_menu;

public:
    Menu(std::vector <FoodItem*> foods) : foods(foods) {}
    Menu() {}

    void setBreakFastMenu(std::vector <FoodItem*> breakfast_menu);
    void setDinnerMenu(std::vector <FoodItem*> dinner_menu);

    enum MENU_TYPE {BREAKFAST, LUNCH, DINNER};

    void printMenu(int menu_type);

    void prettyPrinter(FoodItem* item, int food_type);

    int getMenuPrice(int menu_type);

    // Operator overloading
    FoodItem* operator[](int index);
};

#endif // MENU_H
