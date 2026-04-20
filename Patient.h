#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
private:
    int id;
    std::string name;
    int age;
    std::string condition;

public:
    // Constructor
    Patient(int id, std::string name, int age, std::string condition);

    // Getters
    int getId() const;
    std::string getName() const;
    int getAge() const;
    std::string getCondition() const;

    // Display function
    void display() const;
};

#endif