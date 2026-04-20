#include <iostream>
#include <limits>
#include "System.h"

// Function to pause so user can read output
void waitForEnter() {
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

// Function to safely get menu choice
int getChoice() {
    int choice;

    std::cout << "\n=====================================\n";
    std::cout << "     Patient Management System\n";
    std::cout << "=====================================\n";
    std::cout << "1. Add Patient\n";
    std::cout << "2. View All Patients\n";
    std::cout << "3. Search Patient\n";
    std::cout << "4. Delete Patient\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";

    while (!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter a number (1-5): ";
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return choice;
}

int main() {
    System system;

    while (true) {
        int choice = getChoice();

        switch (choice) {
            case 1:
                system.addPatient();
                waitForEnter();
                break;

            case 2:
                system.viewPatients();
                waitForEnter();
                break;

            case 3:
                system.searchPatient();
                waitForEnter();
                break;

            case 4:
                system.deletePatient();
                waitForEnter();
                break;

            case 5:
                std::cout << "Exiting program...\n";
                return 0;

            default:
                std::cout << "Invalid choice. Please select between 1 and 5.\n";
        }
    }

    return 0;
}