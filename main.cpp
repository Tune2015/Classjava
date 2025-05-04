int main() {
    FoodList foodTracker;
    int choice;
    std::string name;
    float protein, carbs, fat;
    
    do {
        displayMenu();
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Enter food name, protein, carbs, fat: ";
                std::cin >> name >> protein >> carbs >> fat;
                foodTracker.addFood(name, protein, carbs, fat);
                break;
            case 2:
                std::cout << "Enter food name to remove: ";
                std::cin >> name;
                foodTracker.removeFood(name);
                break;
            case 3:
                foodTracker.displayFoods();
                break;
            case 4:
                foodTracker.displayTotals();
                break;
            case 5:
                std::cout << "Enter food name to search: ";
                std::cin >> name;
                foodTracker.searchFood(name);
                break;
            case 7:
                foodTracker.saveToFile("foods.txt");
                break;
            case 8:
                foodTracker.loadFromFile("foods.txt");
                break;
        }
    } while (choice != 9);

    return 0;
}
