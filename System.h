#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include "Patient.h"

class System {
private:
    std::vector<Patient> patients;  // stores all patients

public:
    // Core features
    void addPatient();
    void viewPatients() const;
    void searchPatient() const;
    void deletePatient();
};

#endif