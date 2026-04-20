#include <iostream>
#include <algorithm>
#include "System.h"

// Add Patient
void System::addPatient() {
    int id, age;
    std::string name, condition;

    std::cout << "Enter Patient ID: ";
    std::cin >> id;

    std::cin.ignore(); // clear newline

    std::cout << "Enter Name: ";
    std::getline(std::cin, name);

    std::cout << "Enter Age: ";
    std::cin >> age;

    std::cin.ignore();

    std::cout << "Enter Condition: ";
    std::getline(std::cin, condition);

    Patient newPatient(id, name, age, condition);
    patients.push_back(newPatient);

    std::cout << "Patient added successfully.\n";
}

// View All Patients
void System::viewPatients() const {
    if (patients.empty()) {
        std::cout << "No patients found.\n";
        return;
    }

    for (const auto &p : patients) {
        p.display();
    }
}

// Search Patient by ID
void System::searchPatient() const {
    int id;
    std::cout << "Enter Patient ID to search: ";
    std::cin >> id;

    for (const auto &p : patients) {
        if (p.getId() == id) {
            std::cout << "Patient found:\n";
            p.display();
            return;
        }
    }

    std::cout << "Patient not found.\n";
}

// Delete Patient by ID
void System::deletePatient() {
    int id;
    std::cout << "Enter Patient ID to delete: ";
    std::cin >> id;

    for (auto it = patients.begin(); it != patients.end(); ++it) {
        if (it->getId() == id) {
            patients.erase(it);
            std::cout << "Patient deleted successfully.\n";
            return;
        }
    }

    std::cout << "Patient not found.\n";
}