#include <iostream>
#include <string>

// Recursive function to explore rooms
void exploreDungeon(int depth = 0) {
    // Indentation for visualizing recursion depth
    std::string indent(depth * 2, ' ');
    
    // Base case: Exit the dungeon
    std::cout << indent << "You are in Room " << depth << ". What would you like to do?\n";
    std::cout << indent << "1. Go deeper\n";
    std::cout << indent << "2. Stay here\n";
    std::cout << indent << "3. Exit the dungeon\n";
    
    int choice;
    std::cin >> choice;
    
    if (choice == 3) {
        std::cout << indent << "You decide to exit the dungeon. Goodbye!\n";
        return; // End recursion
    }
    
    // Recursive case: Continue exploring
    if (choice == 1) {
        std::cout << indent << "You venture deeper into the dungeon...\n";
        exploreDungeon(depth + 1);
    } else {
        std::cout << indent << "You decide to rest for a while...\n";
        exploreDungeon(depth); // Stay in the same room
    }
    
    // Display upon leaving a room
    std::cout << indent << "You leave Room " << depth << ".\n";
}

int main() {
    std::cout << "Welcome to the Recursive Dungeon Adventure!\n";
    exploreDungeon(); // Start at Room 0
    std::cout << "Thanks for playing!\n";
    return 0;
}
