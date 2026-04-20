#include <iostream>
#include "Patient.h"

// Constructor
Patient::Patient(int id, std::string name, int age, std::string condition) {
    this->id = id;
    this->name = name;
    this->age = age;
    this->condition = condition;
}

// Getters
int Patient::getId() const {
    return id;
}

std::string Patient::getName() const {
    return name;
}

int Patient::getAge() const {
    return age;
}

std::string Patient::getCondition() const {
    return condition;
}

// Display
void Patient::display() const {
    std::cout << "ID: " << id
              << ", Name: " << name
              << ", Age: " << age
              << ", Condition: " << condition << "\n";
}