#include "menu.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

void Menu::setBreakFastMenu(std::vector<FoodItem *> breakfast_menu){
    this->breakfast_menu = breakfast_menu;
}

void Menu::setDinnerMenu(std::vector<FoodItem*> dinner_menu){
    this->dinner_menu = dinner_menu;
}

void Menu::printMenu(int menu_type){

    cout << menu_type << endl;
    switch(menu_type){
        case Menu::MENU_TYPE::BREAKFAST:
            cout << setw(15) << " *** Breakfast Menu ***" << setw(15) << endl;
            for (int i = 0; i < this->breakfast_menu.size(); i++){
                cout << " ---- " << endl;
                prettyPrinter(this->breakfast_menu[i], this->breakfast_menu[i]->getFoodTypeNumeric());
                cout << " ==== " << endl;
            }
        break;

    case Menu::MENU_TYPE::LUNCH:
        cout << setw(15) << " *** Lunch Menu ***" << setw(15) << endl;
        for (int i = 0; i < this->lunch_menu.size(); i++){
            cout << " ---- " << endl;
            prettyPrinter(this->lunch_menu[i], this->lunch_menu[i]->getFoodTypeNumeric());
            cout << " ==== " << endl;
        }
    break;

    case Menu::MENU_TYPE::DINNER:
        cout << setw(15) << " *** Dinner Menu ***" << setw(15) << endl;
        for (int i = 0; i < this->dinner_menu.size(); i++){
            cout << " ---- " << endl;
            prettyPrinter(this->dinner_menu[i], this->dinner_menu[i]->getFoodTypeNumeric());
            cout << " ==== " << endl;
        }
    break;
    }

}

// Returns a newly created food if not found any
FoodItem* Menu::operator [](int index){
    if (index  > 0 && index < this->foods.size()){
        return this->foods[index];
    }
    FoodItem* burger = new Burger("Burger", 100, 2, FoodItem::FOOD_TYPE::BURGER);
    return burger;
}


void Menu::prettyPrinter(FoodItem *item, int food_type)
{
    switch (food_type) {

        case FoodItem::FOOD_TYPE::BURGER:
        {
                Burger *burger_item = dynamic_cast<Burger*>(item);
                cout << setw(2) << " Item:  " << setw(5) << burger_item->getName() << setw(10) << " --- Price : " << burger_item->getPrice() << " BDT" << endl
                     << setw(2) << " Cheese: " << setw(5) << burger_item->getCheese() << setw(10) << endl
                     << setw(2) << " Patty: " << setw(5) << burger_item->getPattyType() << setw(10) << endl;
                break;

        }

        case FoodItem::FOOD_TYPE::PIZZA:
        {
                Pizza *pizza_item = dynamic_cast<Pizza*>(item);
                cout << setw(2) << " Item:  " << setw(5) << pizza_item->getName() << setw(10) << " --- Price : " << pizza_item->getPrice() << " BDT" << endl
                     << setw(2) << " Toppings: " << setw(5) << pizza_item->getToppings() << setw(10) << endl
                     << setw(2) << " Size: " << setw(5) << pizza_item->getRadius() << setw(10) << endl;
                break;
        }
        default:
            cout << "Error" << endl;
        break;

    }
}
