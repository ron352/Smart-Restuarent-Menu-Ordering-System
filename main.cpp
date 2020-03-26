#include <iostream>
#include "fooditem.h"
#include "burger.h"
#include "menu.h"
#include <string>
#include <vector>

using namespace std;


int main()
{
    // Creating burger item
    std::string burger_name_1 = "Cheeser Chicken";
    int patty_type_1 = Burger::PATTY_TYPE::CHICKEN;
    bool cheese_1 = true;
    int burger_price_1 = 170;
    int spice_level_1 = FoodItem::SPICE_LEVEL::REGULAR;

    std::string burger_name_2 = "Double Decker";
    int patty_type_2 = Burger::PATTY_TYPE::MUTTON;
    bool cheese_2 = false;
    int burger_price_2 = 340;
    int spice_level_2 = FoodItem::SPICE_LEVEL::SPICY;

    std::string pizza_name_1 = "Pepperoni Pizza";
    int radius_1 = 8;
    int pizza_price_1 = 800;
    std::string toppings_1 = "Pepperoni";

    std::string pizza_name_2 = "Ring Pizza";
    int radius_2 = 5;
    int pizza_price_2 = 500;
    std::string toppings_2 = "Mushroom";

    Burger *b1 = new Burger(burger_name_1, burger_price_1, spice_level_1, FoodItem::FOOD_TYPE::BURGER);
    b1->setPattyType(patty_type_1);
    b1->setCheese(true);

    Burger *b2 =  new Burger(burger_name_2,
                             burger_price_2, spice_level_2, FoodItem::FOOD_TYPE::BURGER);
    b2->setPattyType(patty_type_2);
    b2->setCheese(false);

    Pizza *p1 = new Pizza(pizza_name_1, pizza_price_1, spice_level_1, FoodItem::FOOD_TYPE::PIZZA);
    p1->setToppings(toppings_1);
    p1->setRadius(8);

    Pizza *p2 = new Pizza(pizza_name_2, pizza_price_2, spice_level_2, FoodItem::FOOD_TYPE::PIZZA);
    p2->setToppings(toppings_2);
    p2->setRadius(10);

    FoodItem *burger1 = dynamic_cast<FoodItem*>(b1);
    FoodItem *burger2 = dynamic_cast<FoodItem*>(b2);
    FoodItem *pizza1 = dynamic_cast<FoodItem*>(p1);
    FoodItem *pizza2 = dynamic_cast<FoodItem*>(p2);

    vector <FoodItem*> breakfast;
    vector <FoodItem*> dinner;

    breakfast.push_back(burger1);
    breakfast.push_back(pizza2);

    dinner.push_back(burger2);
    dinner.push_back(pizza1);

    // Creating menu
    Menu menu;

    menu.setBreakFastMenu(breakfast);
    menu.setDinnerMenu(dinner);

    // Printing menu
    menu.printMenu(Menu::MENU_TYPE::BREAKFAST);
    menu.printMenu(Menu::MENU_TYPE::DINNER);


    // Writing food details in a file
    p1->saveItemToText();
    p2->saveItemToText();
    b1->saveItemToText();
    b2->saveItemToText();




    return 0;
}

